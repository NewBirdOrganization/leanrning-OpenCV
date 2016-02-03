#include <opencv2\opencv.hpp>

using namespace cv;

int main(int argc, char *argv[])
{
	// ������ͷ��ȡ��Ƶ
	VideoCapture capture(0);
	Mat edges;

	// ѭ����ʾÿһ֡
	for (;;)
	{
		// [1]����ͼ��
		Mat frame;	// ����һ��Mat���������ڴ洢ÿһ֡��ͼ��
		capture >> frame;	// ��ȡ��ǰ֡

		// [2]��ԭͼת����Ϊ�Ҷ�ͼ
		cvtColor(frame, edges, CV_BGR2RGB);	// ת��BGR��ɫͼΪ�Ҷ�ͼ

		// [3]ʹ��3*3�ں������루2*3+1=7��
		blur(frame, edges, Size(7,7));	// ����ģ��

		// [4]����canny��Ե��Ⲣ��ʾ
		Canny(edges, edges, 0, 30, 3);
		imshow("ֱ�Ӵ�����ͷ��ȡ����Ƶ", frame);		// ��ʾ����ǰ�ĵ�ǰ֡
		imshow("��Canny�����Ƶ", edges);	// ��ʾ�����ĵ�ǰ֡
		if (waitKey(30) >= 0)
		{
			break;
		}
	}
}