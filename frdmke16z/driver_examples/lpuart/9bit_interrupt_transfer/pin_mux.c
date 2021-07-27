/*
 * Copyright 2021 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v8.0
processor: MKE16Z64xxx4
package_id: MKE16Z64VLF4
mcu_data: ksdk2_0
processor_version: 8.0.1
board: FRDM-KE16Z
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#include "fsl_common.h"
#include "fsl_port.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
    BOARD_InitPins();
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', prefix: BOARD_, coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '26', peripheral: LPUART0, signal: TX, pin_signal: ADC0_SE5/PTB1/LPUART0_TX/LPSPI0_SOUT/TCLK0, digital_filter: disable}
  - {pin_num: '27', peripheral: LPUART0, signal: RX, pin_signal: ADC0_SE4/PTB0/LPUART0_RX/LPSPI0_PCS0/LPTMR0_ALT3/PWT_IN3, digital_filter: disable}
  - {pin_num: '20', peripheral: LPUART2, signal: RX, pin_signal: TSI0_CH7/PTD6/LPUART2_RX}
  - {pin_num: '19', peripheral: LPUART2, signal: TX, pin_signal: TSI0_CH10/PTD7/LPUART2_TX}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void)
{
    /* Clock Gate Control: Clock enabled. The current clock selection and divider options are locked. */
    CLOCK_EnableClock(kCLOCK_PortB);
    /* Clock Gate Control: Clock enabled. The current clock selection and divider options are locked. */
    CLOCK_EnableClock(kCLOCK_PortD);

    /* PORTB0 (pin 27) is configured as LPUART0_RX */
    PORT_SetPinMux(BOARD_DEBUG_UART_RX_PORT, BOARD_DEBUG_UART_RX_PIN, kPORT_MuxAlt2);

    /* PORTB1 (pin 26) is configured as LPUART0_TX */
    PORT_SetPinMux(BOARD_DEBUG_UART_TX_PORT, BOARD_DEBUG_UART_TX_PIN, kPORT_MuxAlt2);

    /* PORTD6 (pin 20) is configured as LPUART2_RX */
    PORT_SetPinMux(PORTD, 6U, kPORT_MuxAlt2);

    /* PORTD7 (pin 19) is configured as LPUART2_TX */
    PORT_SetPinMux(PORTD, 7U, kPORT_MuxAlt2);
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/