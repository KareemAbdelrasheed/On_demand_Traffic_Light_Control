/*
 * test.c
 *
 *  Created on: Dec 4, 2022
 *      Author: Kareem Abdelrasheed
 */

#include "LIB/STD_TYPES.h"
#include "LIB/BIT_MATH.h"
#include "MCAL/PORT/PORT_interface.h"
#include "MCAL/DIO/DIO_interface.h"
#include "MCAL/GIE/GIE_interface.h"
#include "MCAL/INTERRUPT/interrupt_interface.h"
#include "MCAL/Timer/TIMER_interface.h"
#include "HAL/LED/LED.h"

/*LED
int main(void)
{
	PORT_voidInit();
	TIMER0_voidInit();
	LED_Init();

	while(1)
	{
		LED_voidON(DIO_u8PORTC,DIO_u8PIN1);
		Timer0_vDelayms(1000);
		LED_voidOFF(DIO_u8PORTC,DIO_u8PIN1);
		Timer0_vDelayms(1000);
		for(u8 i=0 ;i<4;i++)
		{
			LED_voidTOGGLE(DIO_u8PORTC,DIO_u8PIN1);
			Timer0_vDelayms(500);
		}
	}
}*/
/*Timer
int main(void)
{
	PORT_voidInit();
	GIE_voidEnable();
	EXTI_voidINT0Init();
	TIMER0_voidInit();
	while(1);

}
void __vector_1 (void) __attribute__((signal));
void __vector_1 (void)
{
	for(u16 i=0;i<10;i++)
	{
	DIO_u8TogglePinValue(DIO_u8PORTC,DIO_u8PIN1);
	Timer0_vDelayms(500);
	}
}*/
/*Interrupt
int main(void)
{
	PORT_voidInit();
	GIE_voidEnable();
//	GIE_voidDisable();
	EXTI_voidINT0Init();
	while(1);

}
void __vector_1 (void) __attribute__((signal));
void __vector_1 (void)
{
	DIO_u8TogglePinValue(DIO_u8PORTC,DIO_u8PIN1);
}
/*

/*DIO
int main(void)
{
	u8 Local_u8PinState=0;

	PORT_voidInit();

	while(1)
	{
		// SET pin value test
		DIO_u8SetPinValue(DIO_u8PORTC,DIO_u8PIN0,0);

		//Get pin test
		DIO_u8GetPinValue(DIO_u8PORTD,DIO_u8PIN2,&Local_u8PinState);

		if(Local_u8PinState==0)
		{
			//toggle pin test
			DIO_u8TogglePinValue(DIO_u8PORTC,DIO_u8PIN1);
			Timer0_vDelayms(500);
		}
	}
}
*/

/*PORT
int main(void)
{

//	 test port module
//	 2 pins as output one high & one low

	PORT_voidInit();

	while(1);
}
*/

