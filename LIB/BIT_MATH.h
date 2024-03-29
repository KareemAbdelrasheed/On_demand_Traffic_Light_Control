/*
 * BIT_MATH.h
 *
 *  Created on: Oct 4, 2022
 *      Author: Kareem Abdelrasheed
 */

#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(var,bit_no)     (var |=(1<<bit_no))
#define CLEAR_BIT(var,bit_no)   (var &= ~(1<<bit_no))
#define TOGGLE_BIT(var,bit_no)  (var ^=(1<<bit_no))
#define GET_BIT(var,bit_no)     ((var>>bit_no)&0x01)


#endif /* BIT_MATH_H_ */
