#include<iostream>
using namespace std;
class polynomial
{
	
	friend ostream &operator<<(ostream &,const polynomial &a);
public:
	void set();
	polynomial();
	polynomial operator+(const polynomial &object1);
	polynomial operator-(const polynomial &object);
	polynomial operator*(const polynomial &object);
	void operator=(polynomial object);
	polynomial operator+=(const polynomial &object);
	polynomial operator-=(const polynomial &object);
	polynomial operator*=(const polynomial &object);
public:
	int poly[13];
};