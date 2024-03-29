/*******************************************************************************************/
/*******************************************************************************************/
/*****************************    Author: kareem moahmed   *********************************/       
/*****************************    Layer:  MCAL             *********************************/       
/*****************************    SWC:    DIO              *********************************/       
/*****************************    Version:1.00             *********************************/
/*******************************************************************************************/
/*******************************************************************************************/

#ifndef DIO_REGISTER_H_       
#define DIO_REGISTER_H_ 

#define  PORTA     *((volatile u8*)0x3b)
#define  PORTB     *((volatile u8*)0x38)
#define  PORTC     *((volatile u8*)0x35)
#define  PORTD     *((volatile u8*)0x32)

#define  DDRA      *((volatile u8*)0X3a)
#define  DDRB      *((volatile u8*)0x37)
#define  DDRC      *((volatile u8*)0x34)
#define  DDRD      *((volatile u8*)0x31)

#define  PINA      *((volatile u8*)0x39)
#define  PINB      *((volatile u8*)0x36)
#define  PINC      *((volatile u8*)0x33)
#define  PIND      *((volatile u8*)0x30)

#endif      
