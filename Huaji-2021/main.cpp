#include<iostream>
#include"General/Param.h"
#include<opencv2/opencv.hpp>
#include"General/CountTime.h"
#include"BaseObject/BaseObject.h"

using namespace std;
using namespace cv;
using namespace rm;

int main()
{
    //Mat src = imread("C:/Girlfriend.jpg"); //ͼƬ·���ǵ��޸�
    //if (src.empty()) {
    //    cout << "image load fail" << endl;
    //    return 0;
    //}
    //cout << src.cols << ' ' << src.rows<<endl;
    //cv::rectangle(src, cv::Rect(cv::Point(src.rows / 2, src.cols / 2), cv::Size(50, 50)), cv::Scalar(0, 255, 0));
    //BaseObject b;
    //b.update(src, cv::Rect(cv::Point(src.rows/2,src.cols/2), cv::Size(50, 50)));
    //b.update(src);
    //b.drawRoiRect();
    //b.showImg();
    //b.showRoiImg();
    //



    //waitKey(0);//û�еĻ�������һ��������
    rm::Param p("config.yml");
    cout << p.debug_drawRoiRect << endl;
    cout << p.debug_showImg << endl;
    cout << p.debug_showRoiImg << endl;
    cout << p.roi_scale_size[0] << endl;
    cout << p.roi_scale_size[1] << endl;
    return 0;

}