/*******************************************************************************************/
/*******************************************************************************************/
/*****************************    Author: kareem moahmed   *********************************/
/*****************************    Layer:  MCAL             *********************************/
/*****************************    SWC:    PORT             *********************************/
/*****************************    Version:1.00             *********************************/
/*******************************************************************************************/
/*******************************************************************************************/

#ifndef MCAL_PORT_PORT_PRIVATE_H_
#define MCAL_PORT_PORT_PRIVATE_H_



#define CONC(b7,b6,b5,b4,b3,b2,b1,b0)                  CONC_HELPER(b7,b6,b5,b4,b3,b2,b1,b0)
#define CONC_HELPER(b7,b6,b5,b4,b3,b2,b1,b0)           0b##b7##b6##b5##b4##b3##b2##b1##b0

#define PORTA_DIR      CONC(PORTA_PIN7_DIR,PORTA_PIN6_DIR,PORTA_PIN5_DIR,PORTA_PIN4_DIR,PORTA_PIN3_DIR,PORTA_PIN2_DIR,PORTA_PIN1_DIR,PORTA_PIN0_DIR)
#define PORTB_DIR      CONC(PORTB_PIN7_DIR,PORTB_PIN6_DIR,PORTB_PIN5_DIR,PORTB_PIN4_DIR,PORTB_PIN3_DIR,PORTB_PIN2_DIR,PORTB_PIN1_DIR,PORTB_PIN0_DIR)
#define PORTC_DIR      CONC(PORTC_PIN7_DIR,PORTC_PIN6_DIR,PORTC_PIN5_DIR,PORTC_PIN4_DIR,PORTC_PIN3_DIR,PORTC_PIN2_DIR,PORTC_PIN1_DIR,PORTC_PIN0_DIR)
#define PORTD_DIR      CONC(PORTD_PIN7_DIR,PORTD_PIN6_DIR,PORTD_PIN5_DIR,PORTD_PIN4_DIR,PORTD_PIN3_DIR,PORTD_PIN2_DIR,PORTD_PIN1_DIR,PORTD_PIN0_DIR)

#define PORTA_VAL      CONC(PORTA_PIN7_VAL,PORTA_PIN6_VAL,PORTA_PIN5_VAL,PORTA_PIN4_VAL,PORTA_PIN3_VAL,PORTA_PIN2_VAL,PORTA_PIN1_VAL,PORTA_PIN0_VAL)
#define PORTB_VAL      CONC(PORTB_PIN7_VAL,PORTB_PIN6_VAL,PORTB_PIN5_VAL,PORTB_PIN4_VAL,PORTB_PIN3_VAL,PORTB_PIN2_VAL,PORTB_PIN1_VAL,PORTB_PIN0_VAL)
#define PORTC_VAL      CONC(PORTC_PIN7_VAL,PORTC_PIN6_VAL,PORTC_PIN5_VAL,PORTC_PIN4_VAL,PORTC_PIN3_VAL,PORTC_PIN2_VAL,PORTC_PIN1_VAL,PORTC_PIN0_VAL)
#define PORTD_VAL      CONC(PORTD_PIN7_VAL,PORTD_PIN6_VAL,PORTD_PIN5_VAL,PORTD_PIN4_VAL,PORTD_PIN3_VAL,PORTD_PIN2_VAL,PORTD_PIN1_VAL,PORTD_PIN0_VAL)

#endif /* MCAL_PORT_PORT_PRIVATE_H_ */
