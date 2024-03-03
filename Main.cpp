#include <iostream>
#include "ua/headers/UserApplication.h"
#include "ip/headers/ImageProcessing.h"
#include "var/headers/ValidationAndResponse.h"

int main(int argc, char* argv[])
{
	std::cout << "Hello from main!\n";

	ImageProcessing imageProcessing;
	imageProcessing.test();

	ValidationAndResponse validationAndResponse;
	validationAndResponse.test();

	UserApplication userApplication;
	return userApplication.run(argc, argv);
}