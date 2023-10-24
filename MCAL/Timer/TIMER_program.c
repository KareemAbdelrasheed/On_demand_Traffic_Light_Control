/************************************************************************************/
/************************************************************************************/
/*************************		Author: Mahmoud Badr		*************************/
/*************************		Layer:  MCAL			    *************************/
/*************************		SWC: 	TIMER 				*************************/
/*************************		Version:1.00				*************************/
/************************************************************************************/
/************************************************************************************/

#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"

#include "TIMER_interface.h"
#include "TIMER_config.h"
#include "TIMER_private.h"
#include "TIMER_register.h"

/******************************************************************************
   Syntax          : void TIMER0_voidInit(void)
   Description     : initialize the timer 0
   Parameters      : -
   Return value:   :void
*******************************************************************************/
void TIMER0_voidInit(void)
{
	/*choose Wave Generation Mode*/
#if TIMER0_GENERATION_MODE == TIMER0_NORMAL_MODE
	CLEAR_BIT(TCCR0,TCCR0_WGM01);
	CLEAR_BIT(TCCR0,TCCR0_WGM00);
	/*Over Flow Interrupt Enable*/
	SET_BIT(TIMSK,TIMSK_TOIE0);
#elif TIMER0_GENERATION_MODE == TIMER0_PWM_PHASE_CORRECT_MODE
	SET_BIT(TCCR0,TCCR0_WGM00);
	CLEAR_BIT(TCCR0,TCCR0_WGM01);
#elif TIMER0_GENERATION_MODE == TIMER0_CTC_MODE
	SET_BIT(TCCR0,TCCR0_WGM01);
	CLEAR_BIT(TCCR0,TCCR0_WGM00);
#elif TIMER0_GENERATION_MODE == TIMER0_FAST_PWM_MODE
	SET_BIT(TCCR0,TCCR0_WGM01);
	SET_BIT(TCCR0,TCCR0_WGM00);
#else
#error "Wrong Generation mode"
#endif
	/*Compare match output mode*/
	TCCR0&=COMP_OPMODE_MASK;
	TCCR0 |= TIMER0_COMPARE_OUTPUT_MODE;
	/*Prescaler*/
	TCCR0&=TIMER_PRESCALER_MASK;
	TCCR0|=TIMER0_PRESCALER;
	OCR0=250;
}
/******************************************************************************
   Syntax          : void Timer0_vDelayms(u16 Copy_u16delay)
   Description     : make a delay by timer 0
   Parameters      : Copy_u16delay the time which you want to delay
   Return value:   : void
*******************************************************************************/

void Timer0_vDelayms(u16 Copy_u16delay)
{
	for(u32 i=0 ; i < (Copy_u16delay*4) ; i++)
	{
		while(GET_BIT(TIFR,1)==0); //polling
		SET_BIT(TIFR,1);
	}
}
