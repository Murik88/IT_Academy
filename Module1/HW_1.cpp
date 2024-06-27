#include <iostream>
int main()
{
	constexpr int FOOT_TO_INCH = 12;
	constexpr float INCH_TO_M = 0.254;
	constexpr float POUNDS_TO_KG = 2.2;
	int foot, inch, pounds;
	std::cout << "Enter height (foot then inch): ";
	std::cin >> foot >> inch;
	std::cout << "Enter weight: ";
	std::cin >> pounds;
	std::cout << "Body Mass Index = " << (pounds / POUNDS_TO_KG) / sqrt((foot * FOOT_TO_INCH + inch) * INCH_TO_M);
	return 0;
}