/*
 * rtos.h
 *
 *  Created on: 2020. 1. 29.
 *      Author: Baram
 */

#ifndef SRC_BSP_RTOS_H_
#define SRC_BSP_RTOS_H_


#ifdef __cplusplus
 extern "C" {
#endif

#include "bsp.h"



void rtosInit(void);
bool rtosIsStarted(void);


#ifdef __cplusplus
 }
#endif


#endif /* SRC_BSP_RTOS_H_ */
