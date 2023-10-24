#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"
#include "../../MCAL/GIE/GIE_interface.h"
#include "../../MCAL/DIO/DIO_interface.h"
#include "../../MCAL/INTERRUPT/interrupt_interface.h"
#include "../../MCAL/Timer/TIMER_interface.h"

void Button_Init(void)
{
	EXTI_voidINT0Init();
	TIMER0_voidInit();
	GIE_voidEnable();
}


u8 Button_GetState(void)
{
	u8 State;
	DIO_u8GetPinValue(DIO_u8PORTD,DIO_u8PIN2,&State);
	return State;
}
