/*
 * BUTTON.h
 *
 *  Created on: Nov 25, 2022
 *      Author: Kareem AbdElRasheed
 */

#ifndef HAL_BUTTON_BUTTON_H_
#define HAL_BUTTON_BUTTON_H_

#include "../../MCAL/Timer/TIMER_interface.h"

void Button_Init(void);

u8 Button_GetState(void);

#endif /* HAL_BUTTON_BUTTON_H_ */
