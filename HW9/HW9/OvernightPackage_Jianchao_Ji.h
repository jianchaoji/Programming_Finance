#pragma once
#include<iostream>
#include"Package_Jianchao_Ji.h"
#include"user_Info_Jianchao_Ji.h"

using namespace std;


class OvernightPackage :public package
{
public:
	OvernightPackage(user, user, double, double);
	double calPrice();
	void setType();
	string returnType();
};