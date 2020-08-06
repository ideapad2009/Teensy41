/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PERIPHERALS_H_
#define _PERIPHERALS_H_

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/
#include "fsl_common.h"
#include "fsl_flexio_mculcd.h"
#include "fsl_gpio.h"
#include "fsl_adc.h"

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/
/* Definitions for BOARD_InitPeripherals functional group */
/* Definition of peripheral ID */
#define FLEXIO3_PERIPHERAL FLEXIO3
/* Definition of the clock source frequency */
#define FLEXIO3_CLK_FREQ 120000000UL
/* FlexIO MCULCD data bus width check */
#if ((defined(FLEXIO_MCULCD_DATA_BUS_WIDTH) && (FLEXIO_MCULCD_DATA_BUS_WIDTH != 8)))
  #error FLEXIO_MCULCD_DATA_BUS_WIDTH define value is not the same as value in the Data bus width setting in the FLEXIO3 component instance. Check define (missing or different value) at the project setting.
#endif
/* GPIO CS pin peripheral */
#define FLEXIO3_GPIO_PERIPHERAL_CSPIN GPIO2
/* GPIO CS pin number */
#define FLEXIO3_GPIO_CSPIN 1UL
/* GPIO RS pin peripheral */
#define FLEXIO3_GPIO_PERIPHERAL_RSPIN GPIO2
/* GPIO RS pin number */
#define FLEXIO3_GPIO_RSPIN 0UL
/* BOARD_InitPeripherals defines for ADC2 */
/* Definition of peripheral ID */
#define ADC2_PERIPHERAL ADC2
/* Definition of special channel interconnected with ADC_ETC which takes real channel to be measured from ADC_ETC. */
#define ADC2_CHANNEL_DRIVEN_BY_ADC_ETC 16U

/***********************************************************************************************************************
 * Global variables
 **********************************************************************************************************************/
/* FlexIO peripheral configuration */
extern FLEXIO_MCULCD_Type FLEXIO3_peripheralConfig;
/* FlexIO MCULCD configuration */
extern flexio_mculcd_config_t FLEXIO3_config;
extern const adc_config_t ADC2_config;
extern const adc_channel_config_t ADC2_channels_config[2];

/***********************************************************************************************************************
 * Global functions
 **********************************************************************************************************************/
/* GPIO CS pin set function */
void FLEXIO3_setCSPin(bool set);
/* GPIO RS pin set function */
void FLEXIO3_setRSPin(bool set);

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/
void BOARD_InitPeripherals(void);

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void);

#if defined(__cplusplus)
}
#endif

#endif /* _PERIPHERALS_H_ */
