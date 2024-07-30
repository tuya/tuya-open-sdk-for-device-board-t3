#!/usr/bin/env python3


import os
import subprocess
import sys


def run_cmd(cmd):
	p = subprocess.Popen(cmd, shell=True)
	ret = p.wait()
	return p

def copy_projects_doc(src_path, dst_path):
	if not os.path.isdir(src_path):
		return 0

	has_doc = False
	has_cmakelist = 0
	for item in os.listdir(src_path):
		item_path = os.path.join(src_path, item)
		if os.path.isfile(item_path):
			if item.endswith(".rst"):
				has_doc = True

			if item == "CMakeLists.txt":
				has_cmakelist = 1

	if has_doc == False:
		return 0

	run_cmd(f'mkdir -p {dst_path}')
	run_cmd(f'cp {src_path}/*.rst {dst_path}/')

	if has_cmakelist == 1:
		return 1

	for item in os.listdir(src_path):
		item_path = os.path.join(src_path, item)
		item_dst_path = os.path.join(dst_path, item)
		if os.path.isdir(item_path):
			has_cmakelist = has_cmakelist + copy_projects_doc(item_path, item_dst_path)

	if (has_cmakelist == 0):
		run_cmd(f'rm -rf {dst_path}')

	return has_cmakelist

def build_lan_doc(doc_path, target, lan):
	lan_dir = f'{doc_path}/{lan}'
	if (target == 'bk7236'):
		copy_projects_doc(f'{lan_dir}/../../../projects', f'{lan_dir}/projects')
	os.chdir(lan_dir)
	p = run_cmd('make arminodocs -j32')
	if p.returncode:
		print("make doc failed!")
		exit(1)
	run_cmd(f'mkdir -p ../build/{lan}')
	run_cmd(f'cp -r _build/* ../build/{lan}')
	os.chdir(doc_path)


def build_with_target(clean, target):
	cur_dir_is_docs_dir = True
	saved_dir = os.getcwd()
	if 'ARMINO_PATH' in os.environ:
		armino_path = os.getenv('ARMINO_PATH')
		DOCS_PATH = f"{armino_path}/docs/{target}"
		cur_path = os.getcwd()
		if cur_path != DOCS_PATH:
			cur_dir_is_docs_dir = False
		print(f'DOCS_PATH set to {DOCS_PATH}')
	else:
		#print('ARMINO_PATH env is not set, set DOCS_PATH to current dir')
		DOCS_PATH = f"{os.getcwd()}/docs/{target}"

	build_dir = f'{DOCS_PATH}/build'
	if (clean):
		run_cmd(f'rm -rf {build_dir}')
		run_cmd(f'rm -rf {DOCS_PATH}/en/_build')
		run_cmd(f'rm -rf {DOCS_PATH}/en/xml')
		run_cmd(f'rm -rf {DOCS_PATH}/en/xml_in')
		run_cmd(f'rm -rf {DOCS_PATH}/en/man')
		run_cmd(f'rm -rf {DOCS_PATH}/zh_CN/_build')
		run_cmd(f'rm -rf {DOCS_PATH}/zh_CN/xml')
		run_cmd(f'rm -rf {DOCS_PATH}/zh_CN/xml_in')
		run_cmd(f'rm -rf {DOCS_PATH}/zh_CN/man')
		run_cmd(f'rm -rf {DOCS_PATH}/__pycache__')
		if (target == 'bk7236'):
			run_cmd(f'rm -rf {DOCS_PATH}/en/projects')
			run_cmd(f'rm -rf {DOCS_PATH}/zh_CN/projects')
		return;

	if not os.path.exists(build_dir):
		run_cmd(f'mkdir -p {build_dir}')

	build_lan_doc(DOCS_PATH, target, 'zh_CN')
	build_lan_doc(DOCS_PATH, target, 'en')

	if cur_dir_is_docs_dir == False:
		run_cmd(f'rm -rf {cur_path}/build/armino/{target}')
		run_cmd(f'cp -rf {DOCS_PATH}/build/ {cur_path}/build/armino/{target}')
		run_cmd(f'rm -rf {cur_path}/build/armino/{target}/*/inc')

	os.chdir(saved_dir)


def build_doc_internal(clean, target):
	if 'ARMINO_PATH' in os.environ:
		armino_path = os.getenv('ARMINO_PATH')
	else:
		armino_path = os.getcwd()

	if not os.path.exists(armino_path + "/build/armino"):
		os.makedirs(armino_path + "/build/armino")

	if (target == "all"):
		build_with_target(clean, "bk7235")
		build_with_target(clean, "bk7236")
		build_with_target(clean, "bk7239")
		build_with_target(clean, "bk7286")
		build_with_target(clean, "bk7256")
		build_with_target(clean, "bk7258")
	else:
		build_with_target(clean, target)

	run_cmd(f'cp {armino_path}/docs/version.json {armino_path}/build/armino/version.json')

def build_doc(target):
	build_doc_internal(False, target)

def main(argv):
	if (len(argv) > 1 and argv[1] == "clean"):
		target = "all"
		if (len(argv) == 3):
			target = sys.argv[2]
		build_doc_internal(True, target)
	else:
		build_doc_internal(False, "all")

if __name__ == "__main__":
	main(sys.argv)
