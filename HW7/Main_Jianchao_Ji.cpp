#include<iostream>
#include"Polynomial_Jianchao_Ji.h"

using namespace std;

int main()
{	
	polynomial poly1; 
	polynomial poly2;
	polynomial poly3;
	polynomial result;
	
	poly1.set();
	poly2.set();


	cout << "First Polynomial is : ";
	cout << poly1 << endl;
	cout << "Second Polynomial is : ";
	cout << poly2 << endl;
	cout << endl;


	cout << "Adding polynomial yields : " ;
	result = poly1 + poly2;
	cout << result << endl;;

	cout << "+= the polynomial yield : "  ;
	poly3 = poly1;
	poly3 +=poly2;
	cout << poly3 << endl;
	cout << endl;

	cout << "Subtracting the polynomial yield : ";
	result = poly1 - poly2;
	cout << result << endl;

	cout << "-= the polynomial yield : ";
	poly3 = poly1;
	poly3 -= poly2;
	cout << poly3 << endl;
	cout << endl;

	cout << "Multiplying the polynomials yields:  ";
	result = poly1*poly2;
	cout << result << endl;

	cout << "*= the polynomial yield : ";
	poly3 = poly1;
	poly3 *= poly2;
	cout << poly3 << endl;
	
	
	return 0;
}
