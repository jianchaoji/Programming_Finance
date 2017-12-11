#include"Polynomial_Jianchao_Ji.h"
#include<iostream>
using namespace std;

polynomial::polynomial()    //use the construct function to initialize the array
{
	int i;
	
		for (i = 0; i < 13; i++)     
		{
			poly[i] =0;    
		}
}
 void polynomial::set()     //assign the polynomial
{
	 int num,coefficient, exponent, i;
	 cout << "Enter the number of polynomial terms:" << endl;
	 cin >> num;
	 for (i = 0; i < num; i++)
	 {
		 cout << "Enter coefficient and exponent:" << endl;
		 cin >> coefficient >> exponent;
		 poly[exponent] = coefficient;  //the number of the array equal to the exponent
	 }                                  //the content of the array equal to the coefficient
}
ostream &operator<<(ostream &out, const polynomial &object)
{
	int i, flat = 0; ;
	bool ifFirst=0;   
	for (i = 0; i < 13; i++)
	{
		flat = object.poly[i];
		if (flat != 0)break;  //find if the polynomial is zero
	}
	if (flat == 0)cout << 0;  //if the polynomial is zero then output zero
	for (i = 0; i < 13; i++)
	{
		if (object.poly[i]!=0)
		{
			if (ifFirst&&object.poly[i]>0)cout << "+ ";   //the fisrt item do not need the "+"
			ifFirst = 1;
			out << object.poly[i];                //output the coefficient
			if (i > 1)cout <<"x^"<<i<<" ";        
			if (i == 1)cout << "x" << " ";        //if the exponent equal to 1,then do not need the "^"
		}
	}
	cout << endl;
	return out;
}
polynomial polynomial::operator+(const polynomial &object)
{
	polynomial result;
	int i;	
		for (i = 0; i < 13; i++)
		{
			result.poly[i] = object.poly[i]+this->poly[i];  //add the coefficient perspectively
		}
	
	return result;
}
polynomial polynomial:: operator-(const polynomial &object)
{
	polynomial result;
	int i;
	for (i = 0; i < 13; i++)
	{
		result.poly[i] = this->poly[i] - object.poly[i];  //subtract the coefficient perspectively 
	}

	return result;
}
polynomial polynomial::operator*(const polynomial &object)
{
	polynomial result;
	int i,j;
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7; j++)
		{
			result.poly[i+j] += this->poly[i] * object.poly[j];  //add the coefficient persperctively after the multiplying operation
		}
	}
	return result;
}
void polynomial::operator=(polynomial object)
{
	int i;
	for (i = 0; i < 13; i++)
	{
		this->poly[i] = object.poly[i];
	}

}
polynomial polynomial::operator+=(const polynomial &object)
{
	
	int i;
	for (i = 0; i < 13; i++)
	{
		this->poly[i] = this->poly[i] + object.poly[i];
	}

	return *this;
}
polynomial polynomial::operator-=(const polynomial &object)
{
	
	int i;
	for (i = 0; i < 13; i++)
	{
		this->poly[i] = this->poly[i] - object.poly[i];
	}

	return *this;
}
polynomial polynomial::operator*=(const polynomial &object)
{
	polynomial temp;
	int i, j;
	for (i = 0; i < 7; i++)
	{
		temp.poly[i] = this->poly[i];   //temp is used to store the object temporarily
	}
	for (i = 0; i < 7; i++)
	{
		this->poly[i]=0;              
	}

	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7; j++)
		{
			this->poly[i+j] += temp.poly[i] * object.poly[j];
		}
	}
	return *this;
}