/*
 * main.c
 *
 *  Created on: 28 jan 2019 ã.
 *      Author: Vladimir Kazantsev
 */



int main(int argc, char *argv[])
{
	char s = 'a';										//Symbol
	char *p = &s; 										//pointer to symbol
	int iArray[] = {1,2,3,4,5,6,7,8,9,10};				//Array from 10 elements
	int (&o)[10] = iArray;								//Reference to integer array
	char *pArray[] = {"Fist", "Second", "Third"};		//Pointer to array from symbolic strings
	char **pp = &p;										//Pointer to pointer to symbol
	const int ci = 1;									//constant integer
	const int *cp = &ci;								//Pointer to constant
	int a = 5;											//Integer
	int *const cpa = &a;								//Constant pointer to integer





	return 0;
}


