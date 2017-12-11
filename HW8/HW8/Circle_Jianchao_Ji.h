#include<iostream>
#include"TwoDimensionalShape_Jianchao_Ji.h"
#pragma once
using namespace std;

class circle : public TwoDimensionalShape
{
public:
	circle();
	void setRadius();
	void setPointCircle();
	void calSurface();
	void print();
private:
	double pi = 3.1415926;  //define the value of the pi
	double radius;
};