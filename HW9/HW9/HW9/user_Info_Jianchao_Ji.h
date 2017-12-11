#pragma once
#include<iostream>

using namespace std;

class user
{
public:
	user::user( string, string, string, string, string);
	void setName(string);
	void setAddress(string);
	void setCity(string);
	void setState(string);
	void setZip_code(string);
	string returnName();
	string returnAddress();
	string returnCity();
	string returnState();
	string returnZip_code();

private:
	string name;
	string address;
	string city;
	string state;
	string zip_code;

};