#include <iostream>
float FactFloat()
{
	float result = 1;
	for (float i = 1; i < 6; ++i)
	{
		result = result * i;
	}
	return result;
}

int FactInt()
{
	int result = 1;
	for (int i = 1; i < 6; ++i)
	{
		result = result * i;
	}
	return result;
}