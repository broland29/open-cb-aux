#include "../headers/ImageProcessing.h"


void ImageProcessing::test()
{
	Mat_<Vec3b> img = imread("C:\\Users\\balin\\source\\repos\\OpenCBDependencyTest\\img.png", IMREAD_COLOR);
	if (img.empty())
	{
		std::cout << "Could not open img.png" << std::endl;
		return;
	}

	imshow("img.png", img);
	waitKey();
}