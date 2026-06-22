/* Copyright 2020 Adam Honse <calcprogrammer1@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define MATRIX_UNSELECT_DRIVE_HIGH

/* key matrix size */
#define RGB_MATRIX_LED_COUNT 104

#define SN32F2XX_RGB_MATRIX_ROW_PINS { C0, C1, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12, B6, B7, B8, B9, B10, B11 }

/* Configure the effects:                                              */
#define RGB_MATRIX_TYPING_HEATMAP_DECREASE_DELAY_MS 50

/* Configure transistor logic for RGB matrix */
#define SN32F2XX_PWM_OUTPUT_ACTIVE_LEVEL SN32F2XX_PWM_OUTPUT_ACTIVE_HIGH
#define SN32F2XX_RGB_OUTPUT_ACTIVE_LEVEL SN32F2XX_RGB_OUTPUT_ACTIVE_LOW

/* Defaults to 4 */
#undef DYNAMIC_KEYMAP_LAYER_COUNT
#define DYNAMIC_KEYMAP_LAYER_COUNT 2

/* Increase PWM, lower to increase max brightness */
#define RGB_MATRIX_SPD_STEP 48

/* Stable branch RGB driver compatibility shims */
#define LED_MATRIX_ROWS MATRIX_ROWS
#define LED_MATRIX_ROW_CHANNELS 3
#define LED_MATRIX_ROWS_HW (LED_MATRIX_ROWS * LED_MATRIX_ROW_CHANNELS)
#define LED_MATRIX_ROW_PINS SN32F2XX_RGB_MATRIX_ROW_PINS
#define LED_MATRIX_COLS MATRIX_COLS
#define LED_MATRIX_COL_PINS MATRIX_COL_PINS
#define DRIVER_LED_TOTAL RGB_MATRIX_LED_COUNT
