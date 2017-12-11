#include<iostream>
#include"TwoDimensionalShape_Jianchao_Ji.h"
#pragma once
using namespace std;

class triangle : public TwoDimensionalShape
{
public:
	triangle();
	void setPointTriangle();
	void setLength();
	void calSurface();
	void print();
private:
	double length;  //as all the side of the triangle are equal there is only one variate to save the length
};
