#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgproc\imgproc.hpp>
using namespace cv;

int main(int argc, char* argv[])
{
	// ����ԭͼ
	Mat srcImage = imread("info.jpg");	
	// ��ʾԭʼͼ
	imshow("��ֵ�˲�[ԭͼ]", srcImage);		
	// ���о�ֵ�˲�����
	Mat dstImage;
	blur(srcImage, dstImage, Size(7, 7));
	// ��ʾЧ��ͼ
	imshow("��ֵ�˲�[Ч��ͼ]", dstImage);
	waitKey(0);
	
	return 0;
}