#pragma once
#include<opencv2/opencv.hpp>
#include<iostream>

namespace rm 
{
	/*
	����Param
	*/
	class Param
	{
	public:
		Param();
		Param(const std::string& filename);

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

