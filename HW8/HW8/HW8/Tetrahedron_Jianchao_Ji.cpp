#include<iostream>
#include<cmath>
#include<math.h>
#include"Tetrahedron_Jianchao_Ji.h"

using namespace std;


tetrahedron::tetrahedron()
{

}

void tetrahedron::setPointTetrahedron()
{
	cout << "Please enter the center of the regular tetrahedron (x-coordinate, y-coordinate, then z-coordinate):";
	this->setPoint();//use the function in the superclass to set the point 
}

void tetrahedron::setLength()
{
	cout << "Please enter the edge length of the regular triangle :";
	cin >> length;
	cout << endl;
}

void tetrahedron::calSurface()
{
	surface = sqrt(3)*pow(length, 2);//calculate the value of the surface
}

void tetrahedron::calVolume()
{
	volume =  sqrt(2*pow(length, 3)/12);  //calculate the value of the volume
}

void tetrahedron::print()
{
	cout << "The regular tetrahedron with edge length " << length <<" that is located at ("
		<< point[0] << "," << point[1] <<"," << point[2] << ") has:" << endl;
	cout << "Area of " << surface << endl;
	cout << "Volume of " << volume << endl << endl;
}