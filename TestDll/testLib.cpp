#include <iostream>

extern "C" {

	__declspec(dllexport) void printer(int a)
	{
		std::cout << "Printing this number: " << a;
	}

	__declspec(dllexport) int addThree(int b)
	{
		return b + 3;
	}

}