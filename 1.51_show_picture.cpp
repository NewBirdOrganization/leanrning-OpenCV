#include <opencv2\opencv.hpp>

using namespace cv;

int main(int argc, char *argv[])
{
	// 读入一张照片
	Mat img = imread("C:\\Users\\lenovo\\Desktop\\1.jpg");
	// 在窗口中显示照片
	imshow("[载入的图片]", img);
	// 等待6000ms后窗口自动关闭
	waitKey(6000);

	return 0;
}