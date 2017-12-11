#pragma once
#include<iostream>
#include"ThreeDimensionalShape_Jianchao_Ji.h"

using namespace std;

class sphere : ThreeDimensionalShape
{
public:
	sphere();
	void setPointSphere();
	void setRadius();
	void calSurface();
	void calVolume();
	void print();
private:
	double pi = 3.1415926;  //define the value of pi
	double radius;


};
