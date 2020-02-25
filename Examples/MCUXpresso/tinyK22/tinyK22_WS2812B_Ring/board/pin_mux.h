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

#define SOPT5_UART0TXSRC_UART_TX 0x00u /*!<@brief UART 0 transmit data source select: UART0_TX pin */

/*! @name PORTC2 (number 45), LED_BLUE
  @{ */
#define BOARD_INITPINS_LED_BLUE_GPIO GPIOC /*!<@brief GPIO device name: GPIOC */
#define BOARD_INITPINS_LED_BLUE_PORT PORTC /*!<@brief PORT device name: PORTC */
#define BOARD_INITPINS_LED_BLUE_PIN 2U     /*!<@brief PORTC pin index: 2 */
                                           /* @} */

/*! @name PORTD0 (number 57), LANE0
  @{ */
#define BOARD_INITPINS_LANE0_GPIO GPIOD /*!<@brief GPIO device name: GPIOD */
#define BOARD_INITPINS_LANE0_PORT PORTD /*!<@brief PORT device name: PORTD */
#define BOARD_INITPINS_LANE0_PIN 0U     /*!<@brief PORTD pin index: 0 */
                                        /* @} */

/*! @name PORTD1 (number 58), LANE1
  @{ */
#define BOARD_INITPINS_LANE1_GPIO GPIOD /*!<@brief GPIO device name: GPIOD */
#define BOARD_INITPINS_LANE1_PORT PORTD /*!<@brief PORT device name: PORTD */
#define BOARD_INITPINS_LANE1_PIN 1U     /*!<@brief PORTD pin index: 1 */
                                        /* @} */

/*! @name PORTD2 (number 59), LANEq
  @{ */
#define BOARD_INITPINS_LANE2_GPIO GPIOD /*!<@brief GPIO device name: GPIOD */
#define BOARD_INITPINS_LANE2_PORT PORTD /*!<@brief PORT device name: PORTD */
#define BOARD_INITPINS_LANE2_PIN 2U     /*!<@brief PORTD pin index: 2 */
                                        /* @} */

/*! @name PORTD3 (number 60), LANE3
  @{ */
#define BOARD_INITPINS_LANE3_GPIO GPIOD /*!<@brief GPIO device name: GPIOD */
#define BOARD_INITPINS_LANE3_PORT PORTD /*!<@brief PORT device name: PORTD */
#define BOARD_INITPINS_LANE3_PIN 3U     /*!<@brief PORTD pin index: 3 */
                                        /* @} */

/*! @name PORTD4 (number 61), LANE4
  @{ */
#define BOARD_INITPINS_LANE4_GPIO GPIOD /*!<@brief GPIO device name: GPIOD */
#define BOARD_INITPINS_LANE4_PORT PORTD /*!<@brief PORT device name: PORTD */
#define BOARD_INITPINS_LANE4_PIN 4U     /*!<@brief PORTD pin index: 4 */
                                        /* @} */

/*! @name PORTD5 (number 62), LANE5
  @{ */
#define BOARD_INITPINS_LANE5_GPIO GPIOD /*!<@brief GPIO device name: GPIOD */
#define BOARD_INITPINS_LANE5_PORT PORTD /*!<@brief PORT device name: PORTD */
#define BOARD_INITPINS_LANE5_PIN 5U     /*!<@brief PORTD pin index: 5 */
                                        /* @} */

/*! @name PORTD6 (number 63), LANE6
  @{ */
#define BOARD_INITPINS_LANE6_GPIO GPIOD /*!<@brief GPIO device name: GPIOD */
#define BOARD_INITPINS_LANE6_PORT PORTD /*!<@brief PORT device name: PORTD */
#define BOARD_INITPINS_LANE6_PIN 6U     /*!<@brief PORTD pin index: 6 */
                                        /* @} */

/*! @name PORTD7 (number 64), LANE7
  @{ */
#define BOARD_INITPINS_LANE7_GPIO GPIOD /*!<@brief GPIO device name: GPIOD */
#define BOARD_INITPINS_LANE7_PORT PORTD /*!<@brief PORT device name: PORTD */
#define BOARD_INITPINS_LANE7_PIN 7U     /*!<@brief PORTD pin index: 7 */
                                        /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

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
