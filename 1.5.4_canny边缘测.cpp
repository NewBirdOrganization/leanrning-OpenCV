#include <opencv2\opencv.hpp>
#include <opencv2\imgproc\imgproc.hpp>
using namespace cv;

int main()
{
	//��0������ԭʼͼ  
	Mat srcImage = imread("info_1.jpg");  //����Ŀ¼��Ӧ����һ����Ϊ1.jpg���ز�ͼ
	imshow("��ԭʼͼ��Canny��Ե���", srcImage); 	//��ʾԭʼͼ 
	Mat dstImage, edge, grayImage;	//��������

	//��1��������srcͬ���ͺʹ�С�ľ���(dst)
	dstImage.create(srcImage.size(), srcImage.type());

	//��2����ԭͼ��ת��Ϊ�Ҷ�ͼ��
	cvtColor(srcImage, grayImage, CV_BGR2GRAY);

	//��3������ʹ�� 3x3�ں�������
	blur(grayImage, edge, Size(3, 3));

	//��4������Canny����
	Canny(edge, edge, 3, 9, 3);

	//��5����ʾЧ��ͼ 
	imshow("��Ч��ͼ��Canny��Ե���", edge);

	waitKey(0);

	return 0;
}