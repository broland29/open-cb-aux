#include <iostream>
#include "ua/headers/UserApplication.h"

int main(int argc, char* argv[])
{
	std::cout << "Hello!\n";
	UserApplication userApplication;
	return userApplication.run(argc, argv);
}