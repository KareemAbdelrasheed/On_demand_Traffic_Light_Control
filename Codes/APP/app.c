/*
 * main.c
 *
 *  Created on: Nov 15, 2022
 *      Author: Kareem AbdElRasheed
 */

#include "app.h"

int main(void)
{
	PORT_voidInit();
	EXTI_voidINT0Init();
	GIE_voidEnable();
	TIMER0_voidInit();

	while(1)
	{


		LED_voidON(DIO_u8PORTA,DIO_u8PIN0 ); //T_RED ON
		Timer0_vDelayms(5000);
		LED_voidOFF(DIO_u8PORTA,DIO_u8PIN0 );  //T_RED OFF
		for(u8 i=0;i<10;i++)
		{
			LED_voidTOGGLE(DIO_u8PORTA,DIO_u8PIN1); //T_YELLOW BLINKING
			Timer0_vDelayms(500);
		}
		LED_voidOFF(DIO_u8PORTA,DIO_u8PIN1 );  //T_YELLOW OFF
		LED_voidON(DIO_u8PORTA,DIO_u8PIN2 ); //T_GREEN ON
		Timer0_vDelayms(5000);
		LED_voidOFF(DIO_u8PORTA,DIO_u8PIN2 );  //T_GREEN OFF
		for(u8 i=0;i<10;i++)
		{
			LED_voidTOGGLE(DIO_u8PORTA,DIO_u8PIN1); //T_YELLOW BLINKING
			Timer0_vDelayms(500);
		}
		LED_voidOFF(DIO_u8PORTA,DIO_u8PIN1 );  //T_YELLOW OFF

	}

}

void __vector_1 (void) __attribute__((signal));
void __vector_1 (void)
{
	u8 Local_u8RedState;
	u8 Local_u8GreenState;
	DIO_u8GetPinValue(DIO_u8PORTA,DIO_u8PIN0,&Local_u8RedState);
	DIO_u8GetPinValue(DIO_u8PORTA,DIO_u8PIN2,&Local_u8GreenState);
	if(Local_u8RedState==ON) //CHEEK IF RED IS ON
	{
		LED_voidON(DIO_u8PORTA,DIO_u8PIN0 ); //T_RED ON
		LED_voidON(DIO_u8PORTB,DIO_u8PIN2 ); //P_GREEN ON
		Timer0_vDelayms(5000);
		LED_voidOFF(DIO_u8PORTA,DIO_u8PIN0 );  //T_RED OFF
		LED_voidOFF(DIO_u8PORTB,DIO_u8PIN2 ); //P_GREEN OFF
		for(u8 i=0;i<10;i++)
		{
			LED_voidTOGGLE(DIO_u8PORTA,DIO_u8PIN1); //T_YELLOW BLINKING
			LED_voidTOGGLE(DIO_u8PORTB,DIO_u8PIN1); //P_YELLOW BLINKING
			Timer0_vDelayms(500);
		}
		LED_voidOFF(DIO_u8PORTA,DIO_u8PIN1 ); //T_YELLOW OFF
		LED_voidOFF(DIO_u8PORTB,DIO_u8PIN1 ); //P_YELLOW OFF
		LED_voidON(DIO_u8PORTB,DIO_u8PIN0 ); //P_RED ON
		LED_voidON(DIO_u8PORTA,DIO_u8PIN2 ); //T_GREEN ON
		Timer0_vDelayms(5000);
		LED_voidOFF(DIO_u8PORTA,DIO_u8PIN2 );  //T_GREEN OFF
		LED_voidOFF(DIO_u8PORTB,DIO_u8PIN0 ); //P_RED OFF
	}
	else
	{
		if (Local_u8GreenState==ON)  //CHEEK IF GREEN IS ON
		{
			LED_voidON(DIO_u8PORTA,DIO_u8PIN2 ); //T_GREEN ON
			LED_voidON(DIO_u8PORTB,DIO_u8PIN0 ); //P_RED ON
			Timer0_vDelayms(5000);
		}
		else                  //CHEEK IF YELLOW IS ON
		{
			LED_voidON(DIO_u8PORTB,DIO_u8PIN0 ); //P_RED ON
			for(u8 i=0;i<10;i++)
			{
				LED_voidTOGGLE(DIO_u8PORTA,DIO_u8PIN1); //T_YELLOW BLINKING
				Timer0_vDelayms(500);
			}
		}

		LED_voidOFF(DIO_u8PORTB,DIO_u8PIN0 ); //P_RED OFF
		LED_voidOFF(DIO_u8PORTA,DIO_u8PIN2 );  //T_GREEN OFF
		for(u8 i=0;i<10;i++)
		{
			LED_voidTOGGLE(DIO_u8PORTA,DIO_u8PIN1); //T_YELLOW BLINKING
			LED_voidTOGGLE(DIO_u8PORTB,DIO_u8PIN1); //P_YELLOW BLINKING
			Timer0_vDelayms(500);
		}
		LED_voidOFF(DIO_u8PORTA,DIO_u8PIN1 ); //T_YELLOW OFF
		LED_voidOFF(DIO_u8PORTB,DIO_u8PIN1 ); //P_YELLOW OFF
		LED_voidON(DIO_u8PORTA,DIO_u8PIN0 ); //T_RED ON
		LED_voidON(DIO_u8PORTB,DIO_u8PIN2 ); //P_GREEN ON
		Timer0_vDelayms(5000);
		LED_voidOFF(DIO_u8PORTA,DIO_u8PIN0 );  //T_RED OFF
		LED_voidOFF(DIO_u8PORTB,DIO_u8PIN2 ); //P_GREEN OFF
		LED_voidOFF(DIO_u8PORTA,DIO_u8PIN1 ); //T_YELLOW ON
		LED_voidOFF(DIO_u8PORTB,DIO_u8PIN1 ); //P_YELLOW ON
		for(u8 i=0;i<10;i++)
		{
			LED_voidTOGGLE(DIO_u8PORTA,DIO_u8PIN1); //T_YELLOW BLINKING
			LED_voidTOGGLE(DIO_u8PORTB,DIO_u8PIN1); //P_YELLOW BLINKING
			Timer0_vDelayms(500);
		}
		LED_voidOFF(DIO_u8PORTA,DIO_u8PIN1 ); //T_YELLOW OFF
		LED_voidOFF(DIO_u8PORTB,DIO_u8PIN1 ); //P_YELLOW OFF
		LED_voidON(DIO_u8PORTB,DIO_u8PIN0 ); //P_RED ON
		LED_voidON(DIO_u8PORTA,DIO_u8PIN2 ); //T_GREEN ON
		Timer0_vDelayms(5000);
		LED_voidOFF(DIO_u8PORTA,DIO_u8PIN2 );  //T_GREEN OFF
		LED_voidOFF(DIO_u8PORTB,DIO_u8PIN0 ); //P_RED OFF
	}
}

