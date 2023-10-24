/************************************************************************************/
/************************************************************************************/
/*************************		Author: Mahmoud Badr		*************************/
/*************************		Layer:  MCAL			    *************************/
/*************************		SWC: 	TIMER 				*************************/
/*************************		Version:1.00				*************************/
/************************************************************************************/
/************************************************************************************/
#ifndef MCAL_TIMER_TIMER_INTERFACE_H_
#define MCAL_TIMER_TIMER_INTERFACE_H_

/******************************************************************************
   Syntax          : void TIMER0_voidInit(void)
   Description     : initialize the timer 0
   Parameters      : -
   Return value:   :void
*******************************************************************************/
void TIMER0_voidInit(void);
/******************************************************************************
   Syntax          : void Timer0_vDelayms(u16 Copy_u16delay)
   Description     : make a delay by timer 0
   Parameters      : Copy_u16delay the time which you want to delay
   Return value:   : void
*******************************************************************************/
void Timer0_vDelayms(u16 Copy_u16delay);


#endif /*_MCAL__TIMER_TIMER_INTERFACE_H_ */
