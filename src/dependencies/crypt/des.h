/******************************************************************************
*	des.h
*
*	Declarations for the DES cipher algorithm.
*
*	Stuart Miller
*	Missouri S&T CpE 5420
*	Fall 2017
******************************************************************************/
#ifndef DES_H
#define DES_H


/**********************************************************
*	Headers
**********************************************************/


/**********************************************************
*	Types
**********************************************************/

typedef unsigned char uint8;

enum{
	ENCRYPT,
	DECRYPT,
};


/**********************************************************
*	Public Function Headers
**********************************************************/
void encrypt_3des(uint8* msg, uint8* key, uint8* output);
void decrypt_3des(uint8* msg, uint8* key, uint8* output);
void des(uint8* msg, uint8* key, uint8* output, uint8 type);


/**********************************************************
*	Private Function Headers
**********************************************************/
static void permute(uint8* input, uint8* output, uint8* table, uint8 tableSz);
static void split(uint8* input, uint8* left, uint8* right, uint8 inputSz);
static void shift(uint8* input, uint8* output, uint8 shiftAmt, uint8 inputSz);
static void combine(uint8* inputLeft, uint8* inputRight, uint8* output, uint8 inputSz);
static void sBoxTransform(uint8* input, uint8* output);
static uint8 getSBoxVal(uint8 input, uint8* sBox);


#endif
