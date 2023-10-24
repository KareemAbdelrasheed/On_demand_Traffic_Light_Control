/*
 * LED.c
 *
 *  Created on: Nov 21, 2022
 *      Author: Kareem AbdElRasheed
 */

#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"
#include "../../MCAL/DIO/DIO_interface.h"
#include "../../MCAL/PORT/PORT_interface.h"

void LED_Init(void)
{
	PORT_voidInit();
}

void LED_voidON(u8 copy_u8Port,u8 copy_u8Pin)
{
	DIO_u8SetPinValue(copy_u8Port,copy_u8Pin,DIO_u8PIN_HIGH);
}

void LED_voidOFF(u8 copy_u8Port,u8 copy_u8Pin)
{
	DIO_u8SetPinValue(copy_u8Port,copy_u8Pin,DIO_u8PIN_LOW);
}


void LED_voidTOGGLE(u8 copy_u8Port,u8 copy_u8Pin)
{
	DIO_u8TogglePinValue(copy_u8Port,copy_u8Pin);
}
