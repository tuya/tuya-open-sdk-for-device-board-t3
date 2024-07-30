/*
 * Copyright (c) 2021-2022, Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

#ifndef BL1_1_TRNG_TESTS_H
#define BL1_1_TRNG_TESTS_H

#include "test_framework.h"

#ifdef __cplusplus
extern "C" {
#endif

void register_testsuite_bl1_trng_interface(struct test_suite_t *p_test_suite);

#ifdef __cplusplus
}
#endif

#endif /* BL1_1_TRNG_TESTS_H */
