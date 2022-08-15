/*******************************************************************************************************/
/* Author               : Seraj Alsersawi                                                             */
/* Version              : V0.0.0                                                                          */
/* Data                 : 13 August 2022                                                             */
/* Description          : LSTD_TYPES.h                                                                */

/*******************************************************************************************************/


/*******************************************************************************************************/
/*                                    GUARD                                   	                           */
/*******************************************************************************************************/
#ifndef LSTD_TYPES.h
#define LSTD_TYPES.h_

/*******************************************************************************************************/
/*                                     STANDARD TYPES	     	                               */
/*******************************************************************************************************/

typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long int u32;
typedef signed char s8; 
typedef signed short int s16;
typedef signed short int s16;
typedef float  f32;
typedef double  f64;

/*******************************************************************************************************/
/*                                     BOOLEAN VALUES	     	                               */
/*******************************************************************************************************/
 
#ifndef FALSE
#define FALSE   (0U)  	//U is suffix for unsigned
#endif

#ifndef TRUE
#define TRUE     (1U)	//U is suffix for unsigned
#endif 

#ifndef NULL
#define NULL  ((void*)0) 
#endif
 
 
 
 
 #endif 
 
 
