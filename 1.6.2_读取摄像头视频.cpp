#include <opencv2\opencv.hpp>
using namespace cv;

int main()
{
	// [1]������ͷ������Ƶ
	VideoCapture capture(0);

	// [2]ѭ����ʾÿһ֡
	for (;;)
	{
		Mat frame;		// ����һ��Mat���������ڴ洢ÿһ֡��ͼ��
		capture >> frame;	// ��ȡ��ǰ֡
		imshow("��ȡ����ͷ", frame); // ��ʾ��ǰ֡
		waitKey(30);	// ��ʱ30s
	}
	return 0;
}