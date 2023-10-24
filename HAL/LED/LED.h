/*
 * LED.h
 *
 *  Created on: Nov 21, 2022
 *      Author: Kareem AbdElRasheed
 */

#ifndef HAL_LED_LED_H_
#define HAL_LED_LED_H_

#include "../../MCAL/DIO/DIO_interface.h"
/******************************************************************************
   Syntax          : void LED_Init(void);
   Description     : Initialize LED
   Parameters      : -
   Return value:   : void
*******************************************************************************/
void LED_Init(void);
/******************************************************************************
   Syntax          :void LED_voidON(u8 copy_u8Port,u8 copy_u8Pin);
   Description     : Set the value High(1) on LED pin on a port
   Parameters      :
   	     	   	   	   copy_u8Port     the port which you want to change the value on it
                       copy_u8Value    the Value which you want to set on it

   Return value:   : void
*******************************************************************************/
void LED_voidON(u8 copy_u8Port,u8 copy_u8Pin);
/******************************************************************************
   Syntax          :void LED_voidON(u8 copy_u8Port,u8 copy_u8Pin);
   Description     : Set the value Low(0) on LED pin on a port
   Parameters      :
   	     	   	   	   copy_u8Port     the port which you want to change the value on it
                       copy_u8Value    the Value which you want to set on it

   Return value:   : void
*******************************************************************************/
void LED_voidOFF(u8 copy_u8Port,u8 copy_u8Pin);
/******************************************************************************
   Syntax          : void GIE_voidDisable(void)
   Description     :  Change the value from high(1) to low(0) or from  low(0) to high(1) on pin on a port
   Parameters      :
   	     	   	   	   copy_u8Port     the port which you want to change the value on it
                       copy_u8Value    the Value which you want to set on it
   Return value:   : void
*******************************************************************************/
void LED_voidTOGGLE(u8 copy_u8Port,u8 copy_u8Pin);


#endif /* HAL_LED_LED_H_ */
