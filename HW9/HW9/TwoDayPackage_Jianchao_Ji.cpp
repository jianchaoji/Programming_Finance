#include<iostream>
#include"TwoDayPackage_Jianchao_Ji.h"
#include"Package_Jianchao_Ji.h"
#include"user_Info_Jianchao_Ji.h"

using namespace std;
/*use the package constructor to initialize the variate in the TwoDayPackage*/
TwoDayPackage::TwoDayPackage(user sender, user receiver,double weight,double price):package(sender,receiver,weight,price)
{
	this->setType();
}
//override the virtual calculation function in the package
double TwoDayPackage::calPrice()
{
	return this->returnWeight();
}

//override the virtual type function in the package
void TwoDayPackage::setType()
{
	type = " Two Day Delivery";
}
//override the virtual function in the package
string TwoDayPackage::returnType()
{
	return type;
}