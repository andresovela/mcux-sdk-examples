/*
 * Copyright 2019 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */


/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/*!
 * @brief
 * UART2 IrDA Select: Pad RX input PTI[6] or PTE[6] selected for RX input of UART2 and UART2 TX signal is not used
 * for modulation.
 */
#define MISC_CTL_UART2IRSEL_0b0 0x00u

/*! @name PORTJ3 (number 62), LED_GREEN
  @{ */
#define BOARD_LED_GREEN_GPIO GPIOJ /*!<@brief GPIO device name: GPIOJ */
#define BOARD_LED_GREEN_PORT PORTJ /*!<@brief PORT device name: PORTJ */
#define BOARD_LED_GREEN_PIN 3U     /*!<@brief PORTJ pin index: 3 */
                                   /* @} */

/*! @name PORTJ4 (number 63), LED_RED
  @{ */
#define BOARD_LED_RED_GPIO GPIOJ /*!<@brief GPIO device name: GPIOJ */
#define BOARD_LED_RED_PORT PORTJ /*!<@brief PORT device name: PORTJ */
#define BOARD_LED_RED_PIN 4U     /*!<@brief PORTJ pin index: 4 */
                                 /* @} */

/*! @name PORTD4 (number 76), LED_ORANGE
  @{ */
#define BOARD_LED_ORANGE_GPIO GPIOD /*!<@brief GPIO device name: GPIOD */
#define BOARD_LED_ORANGE_PORT PORTD /*!<@brief PORT device name: PORTD */
#define BOARD_LED_ORANGE_PIN 4U     /*!<@brief PORTD pin index: 4 */
                                    /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

#define MISC_CTL_PDBADCTRG_0b0 0x00u /*!<@brief PDB bypass XBAR as ADC trigger: XBAR to trigger ADC */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_ConfigTriggerSource(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/