#pragma once
#include<iostream>
#include"ThreeDimensionalShape_Jianchao_Ji.h"

using namespace std;

class tetrahedron :ThreeDimensionalShape
{
public:
	tetrahedron();
	void setPointTetrahedron();
	void setLength();
	void calSurface();
	void calVolume();
	void print();
private:
	double length;

};