#pragma once
#include<opencv2/opencv.hpp>
<<<<<<< HEAD
#include<iostream>
=======
>>>>>>> 7f0da2a3f5994a9c076fb13588361ce7dfb494de

namespace rm 
{
	/*
	����Param
	*/
	class Param
	{
	public:
		Param();
<<<<<<< HEAD
		Param(const std::string& filename);
=======
>>>>>>> 7f0da2a3f5994a9c076fb13588361ce7dfb494de

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

