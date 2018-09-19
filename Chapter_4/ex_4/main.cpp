/*
 * main.c
 *
 *  Created on: 19 сент. 2018 г.
 *      Author: Владимир
 */

#include <iostream>

int main(int argc, char *argv[])
{
	std::cout << "Letters" << std::endl;
	for (char i = 'a'; i <= 'z'; i++)
	{
		std::cout << i << ' ' << int(i) << std::endl;
	}

	std::cout << "Numbers" << std::endl;

	for (char i = '0'; i <= '9'; i++)
	{
		std::cout << i << ' ' << int(i) << std::endl;
	}

	std::cout << "Other visible symbols" << std::endl;
	for (int i = 32; i <= 255; i++)
	{
		if (((char(i)>= 'a') && (char(i) <= 'z')) || ((char(i)>='0') && (char(i)<='9'))) continue;
		std::cout << char(i) << ' ' << i << std::endl;
	}

	std::cout << "Visible symbols with hex integer value" << std::endl;
	std::cout << std::hex;
	for (int i = 32; i <= 255; i++)
	{

		std::cout << char(i) << ' ' << i << std::endl;
	}


}


