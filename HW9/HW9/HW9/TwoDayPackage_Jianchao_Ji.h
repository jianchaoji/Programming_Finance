#pragma once
#include<iostream>
#include"Package_Jianchao_Ji.h"
#include"user_Info_Jianchao_Ji.h"

using namespace std;

	class TwoDayPackage :public package
	{
	public:
		TwoDayPackage(user, user,double,double);
		double calPrice();
		void setType();
		string returnType();
	};

