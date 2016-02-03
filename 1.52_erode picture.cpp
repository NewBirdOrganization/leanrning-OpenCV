#include <opencv2\highgui\highgui.hpp> // OpenCV highgui 模块头文件
#include <opencv2\imgproc\imgproc.hpp> // OpenCV 图像处理头文件

using namespace cv;	// 包含cv命名空间

int main(int argc, char *argv[])
{
	Mat srcImage = imread("info.jpg");	// 载入原图
	imshow("[原图]腐蚀操作", srcImage);	// erode the picture
	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
	Mat dstImage;
	erode(srcImage, dstImage, element);
	imshow("[效果图]腐蚀操作", dstImage);
	waitKey(0);

	return 0;
}