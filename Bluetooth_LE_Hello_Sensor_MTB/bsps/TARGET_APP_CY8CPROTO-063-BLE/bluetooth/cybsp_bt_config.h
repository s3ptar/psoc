/***********************************************************************************************//**
 * \copyright
 * Copyright 2020-2022 Cypress Semiconductor Corporation (an Infineon company) or
 * an affiliate of Cypress Semiconductor Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 **************************************************************************************************/

/**
 * \addtogroup group_bsp_bt Bluetooth Configuration Structure
 * \{
 * Basic configuration structure for the Bluetooth interface on this board.
 */
#pragma once

#if defined(COMPONENT_WICED_BLE)

#include "cybt_platform_config.h"

#if defined(__cplusplus)
extern "C" {
#endif

#if !defined(CYBSP_BT_PLATFORM_CFG_SLEEP_MODE_LP_ENABLED)
/** If not already defined, the sleep mode LP is enabled. */
#define CYBSP_BT_PLATFORM_CFG_SLEEP_MODE_LP_ENABLED      (1)
#endif

/** Bluetooth platform configuration settings for the board. */
extern const cybt_platform_config_t cybsp_bt_platform_cfg;

#ifdef __cplusplus
}
#endif // __cplusplus

#endif /* defined(COMPONENT_WICED_BLE) */

/** \} group_bsp_bt */
