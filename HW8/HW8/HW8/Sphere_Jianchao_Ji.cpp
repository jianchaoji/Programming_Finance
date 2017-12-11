#include<iostream>
#include"Sphere_Jianchao_Ji.h"

using namespace std;

sphere::sphere()
{

}

void sphere::setPointSphere()
{
	cout << "Please enter the center of the regular tetrahedron (x-coordinate, y-coordinate, then z-coordinate):";
	this->setPoint();//use the function in the superclass to set the point 
}

void sphere::setRadius()
{
	cout << "Please enter the edge length of the regular triangle :";
	cin >> radius;
	cout << endl;
}

void sphere::calSurface()
{
	surface = sqrt(4 *pi* pow(radius, 2));// calculate the value of the surface
}

void sphere::calVolume()
{
	volume = sqrt(4 * pi*pow(radius, 3) / 3);//calculate the value of the volume
}

void sphere::print()
{
	cout << "The sphere with the radius " << radius << " that is located at ("
		<< point[0] << "," << point[1] << "," << point[2] << ") has:" << endl;
	cout << "Area of " << surface << endl;
	cout << "Volume of " << volume << endl << endl;
}