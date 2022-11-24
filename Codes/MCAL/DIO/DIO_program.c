/*******************************************************************************************/
/*******************************************************************************************/
/*****************************    Author: kareem moahmed   *********************************/       
/*****************************    Layer:  MCAL             *********************************/       
/*****************************    SWC:    DIO              *********************************/       
/*****************************    Version:1.00             *********************************/
/*******************************************************************************************/
/*******************************************************************************************/

#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"
#include "DIO_interface.h"
#include "DIO_register.h"
#include "DIO_config.h"

/*u8 DIO_u8SetPinDirection(u8 copy_u8Port , u8 copy_u8Pin , u8 copy_u8Direction)
{
	u8 Local_u8ErrorState=0;

	if(copy_u8Pin<=DIO_u8PIN7)
	{
		if (copy_u8Direction==DIO_u8PIN_OUTPUT)
		{
			switch (copy_u8Port)
			{
			case DIO_u8PORTA: SET_BIT(DDRA,copy_u8Pin); break;
			case DIO_u8PORTB: SET_BIT(DDRB,copy_u8Pin); break;
			case DIO_u8PORTC: SET_BIT(DDRC,copy_u8Pin); break;
			case DIO_u8PORTD: SET_BIT(DDRD,copy_u8Pin); break;
			default: Local_u8ErrorState=1;
			}
		}
		else if (copy_u8Direction==DIO_u8PIN_INPUT)
		{
			switch (copy_u8Port)
			{
			case DIO_u8PORTA: CLEAR_BIT(DDRA,copy_u8Pin); break;
			case DIO_u8PORTB: CLEAR_BIT(DDRB,copy_u8Pin); break;
			case DIO_u8PORTC: CLEAR_BIT(DDRC,copy_u8Pin); break;
			case DIO_u8PORTD: CLEAR_BIT(DDRD,copy_u8Pin); break;
			default: Local_u8ErrorState=1;
			}
		}
		else
		{
			Local_u8ErrorState=1;
		}
	}
	else
	{
		Local_u8ErrorState=1;
	}

	return Local_u8ErrorState;
}*/

/*u8 DIO_u8SetPortDirection(u8 copy_u8Port , u8 copy_u8Direction)
{
	u8 Local_u8ErrorState=0;
	switch (copy_u8Port)
	{
	case DIO_u8PORTA: DDRA=copy_u8Direction; break;
	case DIO_u8PORTB: DDRB=copy_u8Direction; break;
	case DIO_u8PORTC: DDRC=copy_u8Direction; break;
	case DIO_u8PORTD: DDRD=copy_u8Direction; break;
	default:  Local_u8ErrorState=1;
	}
	return Local_u8ErrorState;
}*/











/******************************************************************************
 * Syntax          : u8 DIO_u8SetPinValue(u8 copy_u8Port , u8 copy_u8Pin , u8 copy_u8Value)
 * Description     : Set the value between High(1), Low(0) on pin on a port
 * Parameters      :
 *                   copy_u8Port     the port which you want to set the value on its pin
 *                   copy_u8Pin      the pin which you want to set the value on it
 *                   copy_u8Value    the Value which you want to set on the pin
 *
 * Return value:   : Local_u8ErrorState  E_OK
 *                                       E_NOK
 *******************************************************************************/
u8 DIO_u8SetPinValue(u8 copy_u8Port , u8 copy_u8Pin , u8 copy_u8Value)
{
	u8 Local_u8ErrorState=0;
	if(copy_u8Pin<= DIO_u8PIN7)
	{
		if(copy_u8Value==DIO_u8PIN_HIGH)
		{
			switch (copy_u8Port)
			{
			case DIO_u8PORTA: SET_BIT(PORTA,copy_u8Pin); break;
			case DIO_u8PORTB: SET_BIT(PORTB,copy_u8Pin); break;
			case DIO_u8PORTC: SET_BIT(PORTC,copy_u8Pin); break;
			case DIO_u8PORTD: SET_BIT(PORTD,copy_u8Pin); break;
			default: Local_u8ErrorState=1;
			}
		}
		else if(copy_u8Value==DIO_u8PIN_LOW)
		{
			switch (copy_u8Port)
			{
			case DIO_u8PORTA: CLEAR_BIT(PORTA,copy_u8Pin); break;
			case DIO_u8PORTB: CLEAR_BIT(PORTB,copy_u8Pin); break;
			case DIO_u8PORTC: CLEAR_BIT(PORTC,copy_u8Pin); break;
			case DIO_u8PORTD: CLEAR_BIT(PORTD,copy_u8Pin); break;
			default: Local_u8ErrorState=1;
			}
		}
		else
		{
			Local_u8ErrorState=1;
		}
	}
	else
	{
		Local_u8ErrorState=1;
	}
	return Local_u8ErrorState;
}




/******************************************************************************
 * Syntax          : u8 DIO_u8TogglePinValue(u8 copy_u8Port , u8 copy_u8Pin)
 * Description     : Change the value from high(1) to low(0) or from  low(0) to high(1) on pin on a port
 * Parameters      :
 *                   copy_u8Port     the port which you want to change the value on its pin
 *                   copy_u8Pin      the pin which you want to change the value on it
 *
 * Return value:   : Local_u8ErrorState  E_OK
 *                                       E_NOK
 *******************************************************************************/
u8 DIO_u8TogglePinValue(u8 copy_u8Port , u8 copy_u8Pin)
{
	u8 Local_u8ErrorState=0;
	if(copy_u8Pin<= DIO_u8PIN7)
	{

		switch (copy_u8Port)
		{
		case DIO_u8PORTA: TOGGLE_BIT(PORTA,copy_u8Pin); break;
		case DIO_u8PORTB: TOGGLE_BIT(PORTB,copy_u8Pin); break;
		case DIO_u8PORTC: TOGGLE_BIT(PORTC,copy_u8Pin); break;
		case DIO_u8PORTD: TOGGLE_BIT(PORTD,copy_u8Pin); break;
		default: Local_u8ErrorState=1;
		}

	}
	else
	{
		Local_u8ErrorState=1;
	}
	return Local_u8ErrorState;

}
/******************************************************************************
 * Syntax          : u8 DIO_u8SetPortValue(u8 copy_u8Port , u8 copy_u8Value)
 * Description     : Set the value between High(1), Low(0) on a full port
 * Parameters      :
 *                   copy_u8Port     the port which you want to change the value on it
 *                   copy_u8Value    the Value which you want to set on it
 *
 * Return value:   : Local_u8ErrorState  E_OK
 *                                       E_NOK
 *******************************************************************************/
u8 DIO_u8SetPortValue(u8 copy_u8Port , u8 copy_u8Value)
{
	u8 Local_u8ErrorState=0;

	switch (copy_u8Port)
	{
	case DIO_u8PORTA: PORTA=copy_u8Value ; break;
	case DIO_u8PORTB: PORTB=copy_u8Value ; break;
	case DIO_u8PORTC: PORTC=copy_u8Value ; break;
	case DIO_u8PORTD: PORTD=copy_u8Value ; break;
	default: Local_u8ErrorState=1;
	}
	return Local_u8ErrorState;
}
/******************************************************************************
 * Syntax          : u8 DIO_u8GetPinValue(u8 copy_u8Port , u8 copy_u8Pin ,u8* copy_Pu8Value)
 * Description     : Get pin value between High(1),Low(0)
 * Parameters      :
 *                   copy_u8Port     the port which you want to get the value from its pin
 *                   copy_u8Pin      the pin which you want to get the value from
 *                   copy_Pu8Value   the parameter which we save the value on it
 *
 * Return value:   : Local_u8ErrorState  E_OK
 *                                       E_NOK
 *******************************************************************************/
u8 DIO_u8GetPinValue(u8 copy_u8Port , u8 copy_u8Pin ,u8* copy_Pu8Value)
{
	u8 Local_u8ErrorState=0;

	if((copy_Pu8Value!=NULL) && (copy_u8Pin<=DIO_u8PIN7))
	{
		switch (copy_u8Port)
		{
		case DIO_u8PORTA: *copy_Pu8Value= GET_BIT(PINA,copy_u8Pin); break;
		case DIO_u8PORTB: *copy_Pu8Value= GET_BIT(PINB,copy_u8Pin); break;
		case DIO_u8PORTC: *copy_Pu8Value= GET_BIT(PINC,copy_u8Pin); break;
		case DIO_u8PORTD: *copy_Pu8Value= GET_BIT(PIND,copy_u8Pin); break;
		default: Local_u8ErrorState=1;
		}
	}
	else
	{
		Local_u8ErrorState=1;
	}
	return Local_u8ErrorState;

}
