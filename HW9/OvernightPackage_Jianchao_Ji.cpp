#include<iostream>
#include"OvernightPackage_Jianchao_Ji.h"
#include"Package_Jianchao_Ji.h"
#include"user_Info_Jianchao_Ji.h"

using namespace std;

/*use the package constructor to initialize the variate in the OvernightPackage*/
OvernightPackage::OvernightPackage(user sender, user receiver, double weight, double price) : package(sender, receiver, weight, price)
{
	this->setType();
}
//override the virtual calculation price function in the package
double OvernightPackage::calPrice()
{
	return this->returnWeight()*this->returnPrice();
}
//override the virtual type function in the package
void OvernightPackage::setType()
{
	type = "Overnight Delivery";
}


string OvernightPackage::returnType()
{
	return type;
}