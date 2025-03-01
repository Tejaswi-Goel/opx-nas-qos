/*
 * Copyright (c) 2018 Dell Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License. You may obtain
 * a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
 *
 * THIS CODE IS PROVIDED ON AN *AS IS* BASIS, WITHOUT WARRANTIES OR
 * CONDITIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT
 * LIMITATION ANY IMPLIED WARRANTIES OR CONDITIONS OF TITLE, FITNESS
 * FOR A PARTICULAR PURPOSE, MERCHANTABLITY OR NON-INFRINGEMENT.
 *
 * See the Apache Version 2.0 License for specific language governing
 * permissions and limitations under the License.
 */

/*!
 * \file   nas_qos_init.h
 * \brief  Exported header files
 * \date   05-2014
 */
#ifndef __NAS_QOS_INIT_H__
#define __NAS_QOS_INIT_H__

#include "std_error_codes.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * This function initializes the lower NAS related QoS data structure
 * @Return   Standard Error Code
 */
t_std_error nas_qos_init(void);


#ifdef __cplusplus
}
#endif

#endif
