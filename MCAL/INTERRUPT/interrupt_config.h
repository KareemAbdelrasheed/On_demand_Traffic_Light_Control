/*******************************************************************************************/
/*******************************************************************************************/
/*****************************    Author: kareem moahmed   *********************************/
/*****************************    Layer:  MCAL             *********************************/
/*****************************    SWC:    EXTI             *********************************/
/*****************************    Version:1.00             *********************************/
/*******************************************************************************************/
/*******************************************************************************************/

#ifndef MCAL_INTERRUPT_INTERRUPT_CONFIG_H_
#define MCAL_INTERRUPT_INTERRUPT_CONFIG_H_


#define LOW_LEVEL     0
#define ANY_CHANGE    1
#define FALLING_EDGE  2
#define RISING_EDGE   3

#define INT0_STATE  FALLING_EDGE /*choose from LOW_LEVEL,ANY_CHANGE,FALLING_EDGE,RISING_EDGE*/
#define INT1_STATE  FALLING_EDGE /*choose from LOW_LEVEL,ANY_CHANGE,FALLING_EDGE,RISING_EDGE*/
#define INT2_STATE  FALLING_EDGE /*choose from LOW_LEVEL,ANY_CHANGE,FALLING_EDGE,RISING_EDGE*/

#endif /* MCAL_INTERRUPT_INTERRUPT_CONFIG_H_ */
