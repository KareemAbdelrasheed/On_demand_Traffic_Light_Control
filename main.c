#include "APP/app.h"

int main(void)
{
	App_Start();
	while(1)
	{

		LED_voidON(DIO_u8PORTA,DIO_u8PIN2 ); //T_GREEN ON
		Timer0_vDelayms(5000);
		LED_voidOFF(DIO_u8PORTA,DIO_u8PIN2 );  //T_GREEN OFF

		for(u8 i=0;i<10;i++)
		{
			LED_voidTOGGLE(DIO_u8PORTA,DIO_u8PIN1); //T_YELLOW BLINKING
			Timer0_vDelayms(500);
		}
		LED_voidOFF(DIO_u8PORTA,DIO_u8PIN1 );  //T_YELLOW OFF
		LED_voidON(DIO_u8PORTA,DIO_u8PIN0 ); //T_RED ON
		Timer0_vDelayms(5000);
		LED_voidOFF(DIO_u8PORTA,DIO_u8PIN0 );  //T_RED OFF
		for(u8 i=0;i<10;i++)
		{
			LED_voidTOGGLE(DIO_u8PORTA,DIO_u8PIN1); //T_YELLOW BLINKING
			Timer0_vDelayms(500);
		}
		LED_voidOFF(DIO_u8PORTA,DIO_u8PIN1 );  //T_YELLOW OFF

	}

}
