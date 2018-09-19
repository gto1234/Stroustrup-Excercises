/*
 * main.c
 *
 *  Created on: 19 сент. 2018 г.
 *      Author: Владимир
 */

#include <iostream>

enum en_a
{
	elem_a_1 = 200,
	elem_a_2,
	elem_a_3 = 400,
	elem_a_4,
};

enum en_b
{
	elem_b_1 = -1300,
	elem_b_2,
	elem_b_3 = 19950,
	elem_b_4,
};

int main(int argc, char *argv[])
{
	//Fundamental types
	std::cout << "bool size " << sizeof(bool) << std::endl;
	std::cout << "int size " << sizeof(int) << std::endl;
	std::cout << "char size " << sizeof(char) << std::endl;
	std::cout << "double size " << sizeof(double) << std::endl;

	//Pointers to fundamental types
	std::cout << "bool* size " << sizeof(bool*) << std::endl;
	std::cout << "int* size " << sizeof(int*) << std::endl;
	std::cout << "char* size " << sizeof(char*) << std::endl;
	std::cout << "double* size " << sizeof(double*) << std::endl;

	//Enumerations
	std::cout << "en_a size " << sizeof(en_a) << std::endl;
	std::cout << "en_b size " << sizeof(en_b) << std::endl;


}


