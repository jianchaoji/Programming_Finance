#include<iostream>
#include"Shape_Jianchao_Ji.h"
#pragma once
class TwoDimensionalShape : public shape
{
public:
	TwoDimensionalShape();
	void setPoint();
protected:
	double surface;   //all of the two dimensional shape have surface and two dimensional point
	double point[2] = { 0 };
};
