#pragma once
#include<opencv2/opencv.hpp>

namespace rm 
{
	/*
	����Param
	*/
	class Param
	{
	public:
		Param();

		//debug����
		bool debug_drawRoiRect;
		bool debug_showRoiImg;
		bool debug_showImg;



		cv::Vec2i roi_scale_size;//roi����Ŀ��������ű���
	};





	class ArmorParam :public Param
	{
	public:
		ArmorParam();




	};


}

