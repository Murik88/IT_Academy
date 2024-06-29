#include <iostream>
#include "fact.h"
//#define INTEGER
//#define FLOAT
#define TRIAL
int main()
{
#ifdef INTEGER
	std::cout << "factorial of five = " << FactInt() << std::endl;
#endif
#ifdef FLOAT
	std::cout << "factorial of five = " << FactFloat() << std::endl;
#endif
#ifdef TRIAL
	std::cout << "Trial version" << std::endl;
#endif
	return 0;
}