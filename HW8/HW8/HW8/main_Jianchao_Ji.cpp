#include<iostream>
#include"Circle_Jianchao_Ji.h"
#include"Triangle_Jianchao_Ji.h."
#include"Tetrahedron_Jianchao_Ji.h"
#include"Sphere_Jianchao_Ji.h"

using namespace std;

int main()
{
	int choice;
	while (1)
	{
		cout << "Please choose a shape or 0 to exit:" << endl;
		cout << "1. Circle" << endl;
		cout << "2. Triangle" << endl;
		cout << "3. Sphere" << endl;
		cout << "4. Regular Tetrahedron " << endl;
		cout << "0. Exit" << endl;
		cout << "choice:";
			cin >> choice;
		cout << endl;
		switch (choice)
		{
		case 1: 
		{
			circle r1;
			r1.setPointCircle();
			r1.setRadius();
			r1.calSurface();
			r1.print();
			break;
		}
		case 2:
		{
			triangle t1;
			t1.setPointTriangle();
			t1.setLength();
			t1.calSurface();
			t1.print();
			break;
		}

		case 3:
		{
			sphere s1;
			s1.setPointSphere();
			s1.setRadius();
			s1.calSurface();
			s1.calVolume();
			s1.print();
			break;
		}

		case 4:
		{
			tetrahedron T1;
			T1.setPointTetrahedron();
			T1.setLength();
			T1.calSurface();
			T1.calVolume();
			T1.print();
			break;
		}
		case 0:
		{
			return 0;
		}
		}
	}

	
	return 0;
}