#pragma once
#include<iostream>
#include"Shape_Jianchao_Ji.h"

class ThreeDimensionalShape :public shape
{
public:
	ThreeDimensionalShape();
	void setPoint();
protected:
	double volume;  //all of the three dimensional shape have surface volume and three dimensional point
	double surface;
	double point[3];
private:
};
