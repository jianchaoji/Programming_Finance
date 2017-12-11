#include<iostream>
#include"user_Info_Jianchao_Ji.h"

using namespace std;

/*this class is to use to store the information of the sender and the recipient*/
user::user(string name,string address,string city,string state,string zip_code)
{
	this->setName(name);
	this->setAddress(address);
	this->setCity(city);
	this->setState(state);
	this->setZip_code(zip_code);
}


void user::setName(string name)
{
	this->name = name;
}

void user::setAddress(string address)
{
	this->address = address;
}

void user::setCity(string city)
{
	this->city = city;
}

void user::setState(string state)
{
	this->state = state;
}

void user::setZip_code(string zip_code)
{
	this->zip_code = zip_code;
}

string user:: returnName()
{
	return name;
}
string user::returnAddress()
{
	return address;
}
string user::returnCity()
{
	return city;
}
string user::returnState()
{
	return state;
}
string user::returnZip_code()
{
	return zip_code;
}