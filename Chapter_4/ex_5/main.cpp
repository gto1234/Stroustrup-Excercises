/*
 * main.c
 *
 *  Created on: 19 сент. 2018 г.
 *      Author: Владимир
 */

#include <iostream>
#include <limits>

int main(int argc, char *argv[])
{
	std::cout << "Max of char " <<  std::numeric_limits<char>::max() << std::endl;
	std::cout << "Min of char " <<  std::numeric_limits<char>::min() << std::endl;

	std::cout << "Max of short " <<  std::numeric_limits<short>::max() << std::endl;
	std::cout << "Min of short " <<  std::numeric_limits<short>::min() << std::endl;

	std::cout << "Max of int " <<  std::numeric_limits<int>::max() << std::endl;
	std::cout << "Min of int " <<  std::numeric_limits<int>::min() << std::endl;

	std::cout << "Max of float " <<  std::numeric_limits<float>::max() << std::endl;
	std::cout << "Min of float " <<  std::numeric_limits<float>::min() << std::endl;

	std::cout << "Max of double " <<  std::numeric_limits<double>::max() << std::endl;
	std::cout << "Min of double " <<  std::numeric_limits<double>::min() << std::endl;

	std::cout << "Max of long double " <<  std::numeric_limits<long double>::max() << std::endl;
	std::cout << "Min of long double " <<  std::numeric_limits<long double>::min() << std::endl;

	std::cout << "Max of unsigned " <<  std::numeric_limits<unsigned>::max() << std::endl;
	std::cout << "Min of unsigned " <<  std::numeric_limits<unsigned>::min() << std::endl;

}


