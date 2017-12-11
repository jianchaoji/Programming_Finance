#include<iostream>
#include"Triangle_Jianchao_Ji.h"
#include<math.h>
using namespace std;

triangle::triangle()
{
}

void triangle::setPointTriangle()
{
	cout << "Please enter the center of the triangle (x-coordinate and then y-coordinate):";
	this->setPoint();//use the function in the superclass to set the point 
}

void triangle::setLength()
{
	cout << "Please enter the length of the triangle :";
	cin >> length;
	cout << endl;
}

void triangle::calSurface()
{
	surface = sqrt(3)*pow(length, 2) / 4;//calculate the valume of the surface
}

void triangle::print()
{
	cout << "The triangle with length " << length<< " that is located at ("
		<< point[0] << "," << point[1] << ") has:" << endl;
	cout << "An area of " << surface << endl << endl;
}