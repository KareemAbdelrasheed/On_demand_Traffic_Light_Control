/************************************************************************************/
/************************************************************************************/
/*************************		Author: Mahmoud Badr		*************************/
/*************************		Layer:  MCAL			    *************************/
/*************************		SWC: 	TIMER 				*************************/
/*************************		Version:1.00				*************************/
/************************************************************************************/
/************************************************************************************/

#ifndef COTS_1_MCAL_6__TIMER_TIMER_REGISTER_H_
#define COTS_1_MCAL_6__TIMER_TIMER_REGISTER_H_

/*TIMER0 Registers*/
#define TCCR0 *((volatile u8*) 0x53) /*TIMER0 control Register*/
#define TCCR0_WGM00 6				 /*Waveform Generation bit0*/
#define TCCR0_WGM01 3				 /*Waveform Generation bit1*/
#define TCCR0_CS02  2				 /*Pre-Scaler bit2*/
#define TCCR0_CS01  1				 /*Pre-Scaler bit1*/
#define TCCR0_CS00  0				 /*Pre-Scaler bit0*/
#define OCR0  *((volatile u8*) 0x5c) /*OutPut Compare Register 0*/

#define TIMSK *((volatile u8*) 0x59) /*Timer Mask*/
#define TIMSK_TOIE0 	0			 /*OVERFLOW 0 interrupt Enable*/
#define TIMSK_OCIE0		1			 /*Out Compare 0 interrupt Enable*/
#define TIMSK_TOIE1 	2			 /*OVERFLOW 1 interrupt Enable*/
#define TIMSK_OCIE1B	3			 /*Out Compare 1B interrupt Enable*/
#define TIMSK_OCIE1A	4			 /*Out Compare 1A interrupt Enable*/
#define TIMSK_TICIE1	5			 /*Input Capture Interrupt Enable*/
#define TIMSK_TOIE2 	6			 /*OVERFLOW 2 interrupt Enable*/
#define TIMSK_OCIE2		7			 /*Out Compare 2 interrupt Enable*/

#define TIFR		*((volatile u8*) 0x58)

/*TIMER2 Registers*/
#define TCCR2 *((volatile u8*) 0x45) /*TIMER2 control Register*/
#define TCCR2_WGM20 6				 /*Waveform Generation bit0*/
#define TCCR2_WGM21 3				 /*Waveform Generation bit1*/
#define TCCR2_CS02  2				 /*Pre-Scaler bit2*/
#define TCCR2_CS01  1				 /*Pre-Scaler bit1*/
#define TCCR2_CS00  0				 /*Pre-Scaler bit0*/
#define OCR2  *((volatile u8*) 0x43) /*OutPut Compare Register 1*/

#endif /* COTS_1_MCAL_6__TIMER_TIMER_REGISTER_H_ */
