#include "../headers/ImageProcessing.h"

using namespace cv;


ImageProcessing::ImageProcessing()
{
	utils::logging::setLogLevel(cv::utils::logging::LOG_LEVEL_SILENT);
}


void ImageProcessing::test()
{
	std::cout << "Hello from ImageProcessing!" << std::endl;

	Mat_<Vec3b> img = imread("C:\\open-cb-aux\\img.png", IMREAD_COLOR);
	if (img.empty())
	{
		std::cout << "Could not open img.png" << std::endl;
		return;
	}

	imshow("img.png", img);
	waitKey();
}