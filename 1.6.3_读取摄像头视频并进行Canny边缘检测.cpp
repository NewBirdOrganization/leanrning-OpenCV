#include <opencv2\opencv.hpp>

using namespace cv;

int main(int argc, char *argv[])
{
	// 从摄像头读取视频
	VideoCapture capture(0);
	Mat edges;

	// 循环显示每一帧
	for (;;)
	{
		// [1]读入图像
		Mat frame;	// 定义一个Mat变量，用于存储每一帧的图像
		capture >> frame;	// 读取当前帧

		// [2]将原图转换成为灰度图
		cvtColor(frame, edges, CV_BGR2RGB);	// 转换BGR彩色图为灰度图

		// [3]使用3*3内核来降噪（2*3+1=7）
		blur(frame, edges, Size(7,7));	// 进行模糊

		// [4]进行canny边缘检测并显示
		Canny(edges, edges, 0, 30, 3);
		imshow("直接从摄像头读取的视频", frame);		// 显示处理前的当前帧
		imshow("被Canny后的视频", edges);	// 显示处理后的当前帧
		if (waitKey(30) >= 0)
		{
			break;
		}
	}
}