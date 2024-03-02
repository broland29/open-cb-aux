#include <iostream>
#include "ua/headers/UserApplication.h"
#include "ip/headers/ImageProcessing.h"

int main(int argc, char* argv[])
{
	std::cout << "Hello!\n";

	ImageProcessing imageProcessing;
	imageProcessing.test();

	UserApplication userApplication;
	return userApplication.run(argc, argv);
}