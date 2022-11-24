/*******************************************************************************************/
/*******************************************************************************************/
/*****************************    Author: kareem moahmed   *********************************/
/*****************************    Layer:  MCAL             *********************************/
/*****************************    SWC:    EXTI             *********************************/
/*****************************    Version:1.00             *********************************/
/*******************************************************************************************/
/*******************************************************************************************/
#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"
#include "interrupt_interface.h"
#include "interrupt_config.h"
#include "interrupt_register.h"

/******************************************************************************
   Syntax          : void EXTI_voidINT0Init(void)
   Description     : initialize the external interrupt 0
   Parameters      : -
   Return value:   :void
*******************************************************************************/
void EXTI_voidINT0Init(void)
{
#if INT0_STATE==LOW_LEVEL
	CLEAR_BIT(MCUCR,MCUCR_ISC00);
	CLEAR_BIT(MCUCR,MCUCR_ISC01);
#elif INT0_STATE==ANY_CHANGE
	SET_BIT(MCUCR,MCUCR_ISC00);
	CLEAR_BIT(MCUCR,MCUCR_ISC01);
#elif INT0_STATE==FALLING_EDGE
	CLEAR_BIT(MCUCR,MCUCR_ISC00);
	SET_BIT(MCUCR,MCUCR_ISC01);
#elif INT0_STATE==RISING_EDGE
	SET_BIT(MCUCR,MCUCR_ISC00);
	SET_BIT(MCUCR,MCUCR_ISC01);
#endif
	/*peripheral interrupt enable for int0*/
	SET_BIT(GICR,GICR_INT0);

}
/******************************************************************************
   Syntax          : void EXTI_voidINT1Init(void)
   Description     : initialize the external interrupt 1
   Parameters      : -
   Return value:   :void
*******************************************************************************/
void EXTI_voidINT1Init(void)
{
#if INT1_STATE==LOW_LEVEL
	CLEAR_BIT(MCUCR,MCUCR_ISC10);
	CLEAR_BIT(MCUCR,MCUCR_ISC11);
#elif INT1_STATE==ANY_CHANGE
	SET_BIT(MCUCR,MCUCR_ISC10);
	CLEAR_BIT(MCUCR,MCUCR_ISC11);
#elif INT1_STATE==FALLING_EDGE
	CLEAR_BIT(MCUCR,MCUCR_ISC10);
	SET_BIT(MCUCR,MCUCR_ISC11);
#elif INT1_STATE==RISING_EDGE
	SET_BIT(MCUCR,MCUCR_ISC10);
	SET_BIT(MCUCR,MCUCR_ISC11);
#endif

	/*peripheral interrupt enable for int0*/
	SET_BIT(GICR,GICR_INT1);
}
/******************************************************************************
   Syntax          : void EXTI_voidINT2Init(void)
   Description     : initialize the external interrupt 2
   Parameters      : -
   Return value:   :void
*******************************************************************************/
void EXTI_voidINT2Init(void)
{

#if INT2_STATE==FALLING_EDGE
	CLEAR_BIT(MCUCSR,MCUCSR_INT2);
#elif INT2_STATE==RISING_EDGE
	SET_BIT(MCUCSR,MCUCSR_INT2);
#endif
	/*peripheral interrupt enable for int2*/
	SET_BIT(GICR,GICR_INT2);
}

