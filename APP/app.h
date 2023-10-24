/*
 * app.h
 *
 *  Created on: Nov 15, 2022
 *      Author: Kareem AbdElRasheed
 */


#ifndef APP_H_
#define APP_H_

#include "../LIB/STD_TYPES.h"
#include "../LIB/BIT_MATH.h"
#include "../HAL/LED/LED.h"
#include "../HAL/BUTTON/BUTTON.h"

void App_Start(void);

#define OFF 0
#define ON  1

#define TIMEOUT	50000ul

#endif /* APP_H_ */
