#include <opencv2\highgui\highgui.hpp> // OpenCV highgui ģ��ͷ�ļ�
#include <opencv2\imgproc\imgproc.hpp> // OpenCV ͼ����ͷ�ļ�

using namespace cv;	// ����cv�����ռ�

int main(int argc, char *argv[])
{
	Mat srcImage = imread("info.jpg");	// ����ԭͼ
	imshow("[ԭͼ]��ʴ����", srcImage);	// erode the picture
	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
	Mat dstImage;
	erode(srcImage, dstImage, element);
	imshow("[Ч��ͼ]��ʴ����", dstImage);
	waitKey(0);

	return 0;
}