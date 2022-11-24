/************************************************************************************/
/************************************************************************************/
/*************************		Author: Mahmoud Badr		*************************/
/*************************		Layer:  MCAL			    *************************/
/*************************		SWC: 	TIMER 				*************************/
/*************************		Version:1.00				*************************/
/************************************************************************************/
/************************************************************************************/

#ifndef COTS_1_MCAL_6__TIMER_TIMER_PRIVATE_H_
#define COTS_1_MCAL_6__TIMER_TIMER_PRIVATE_H_
/*Timer0 Waveform generation modes*/
#define TIMER0_NORMAL_MODE 				1
#define TIMER0_PWM_PHASE_CORRECT_MODE	2
#define TIMER0_CTC_MODE					3
#define TIMER0_FAST_PWM_MODE			4

/*Timer0 Compare Output Modes*/
#define COMP_OPMODE_MASK				0b11001111
#define TIMER0_NORMAL					0b00000000
#define TIMER0_TOGGLE_OC0				0b00010000
#define TIMER0_CLR_OC0					0b00100000
#define TIMER0_SET_OC0					0b00110000
#define TIMER0_CLR_ON_COMP_SET_AT_TOP 	0b00100000
#define TIMER0_SET_ON_COMP_CLR_AT_TOP 	0b00110000

/*Pre Scaler*/
#define TIMER_PRESCALER_MASK	0b11111000
#define NO_CLK_SRC				0
#define NO_DIV    				1
#define DIV_BY_8  				2
#define DIV_BY_64 				3
#define DIV_BY_256 				4
#define DIV_BY_1024 			5
#define EXT_CLK_FALL_EDGE		6
#define EXT_CLK_RAIS_EDGE		7

/*Timer0 Waveform generation modes*/
#define TIMER2_NORMAL_MODE 				1
#define TIMER2_PWM_PHASE_CORRECT_MODE	2
#define TIMER2_CTC_MODE					3
#define TIMER2_FAST_PWM_MODE			4

/*Timer0 Compare Output Modes*/
#define COMP_OPMODE_MASK				0b11001111
#define TIMER2_NORMAL					0b00000000
#define TIMER2_TOGGLE_OC2				0b00010000
#define TIMER2_CLR_OC2					0b00100000
#define TIMER2_SET_OC2					0b00110000
#define TIMER2_CLR_ON_COMP_SET_AT_TOP 	0b00100000
#define TIMER2_SET_ON_COMP_CLR_AT_TOP 	0b00110000

#endif /* COTS_1_MCAL_6__TIMER_TIMER_PRIVATE_H_ */
