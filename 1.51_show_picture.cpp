#include <opencv2\opencv.hpp>

using namespace cv;

int main(int argc, char *argv[])
{
	// ����һ����Ƭ
	Mat img = imread("C:\\Users\\lenovo\\Desktop\\1.jpg");
	// �ڴ�������ʾ��Ƭ
	imshow("[�����ͼƬ]", img);
	// �ȴ�6000ms�󴰿��Զ��ر�
	waitKey(6000);

	return 0;
}