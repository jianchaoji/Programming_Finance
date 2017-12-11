#pragma once
#include"user_Info_Jianchao_Ji.h"
#include<iostream>

using namespace std;

class package
{
public: 
	package(user , user, double ,double);
	void setWeight(double);
	void setPrice(double);
	void setSenderName(string);
	void setSenderAddress(string);
	void setSenderCity(string);
	void setSenderState(string);
	void setSenderZip_code(string);
	void setRecipientName(string);
	void setRecipientAddress(string);
	void setRecipientCity(string);
	void setRecipientState(string);
	void setRecipientZip_code(string);
	double returnWeight();
	double returnPrice();
	string returnSenderName();
	string returnSenderAddress();
	string returnSenderCity();
	string returnSenderState();
	string returntSenderZip_code();
	string returnRecipientName();
	string returnRecipientAddress();
	string returnRecipientCity();
	string returnRecipientState();
	string returnRecipientZip_code();
	string returnType();
	virtual double calPrice();
	virtual void setType();
private:
	double weight, price;
	string senderName;
	string senderAddress;
	string senderCity;
	string senderState;
	string senderZip_code;
	string recipientName;
	string recipientAddress;
	string recipientCity;
	string recipientState;
	string recipientZip_code;
protected:
	string type;  //type is used to store the type of the package
};

