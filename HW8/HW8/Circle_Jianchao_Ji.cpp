#include<iostream>
#include"Circle_Jianchao_Ji.h"
#include<cmath>

using namespace std;


circle::circle()
{

}

void circle::calSurface()
{
	surface = pi*pow(radius, 2);  //calculate the valume of the surface

}

void circle::setRadius()
{
	cout << "Please input the value of the radius";
	cin >> radius;
}

void circle::setPointCircle()
{
	cout << "Please enter the center of the circle (x-coordinate and then y-coordinate):";
	this->setPoint();  //use the function in the superclass to set the point 
}

void circle::print()
{
	cout << "The circle with radius " << radius << " that is located at ("
		<< point[0] << "," << point[1] << ") has:" << endl;
	cout << "An area of " << this->surface << endl << endl;
}