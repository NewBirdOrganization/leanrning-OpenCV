#include <opencv2\opencv.hpp>

using namespace cv;

int main(int argc, char* argv[])
{
	// [1]������Ƶ
	VideoCapture capture("1.avi");

	// [2]ѭ����ʾÿһ֡
	for (;;)
	{
		Mat frame;		// ����һ��Mat���������ڴ洢ÿһ֡��ͼ��
		capture >> frame;	// ��ȡ��ǰ֡
		imshow("��ȡ��Ƶ", frame);	// ��ʾ��ǰ֡
		waitKey(30);	// ��ʱ30s
	}
	return 0;
}