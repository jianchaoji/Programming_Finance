#include"Package_Jianchao_Ji.h"
#include"user_Info_Jianchao_Ji.h"
#include<iostream>

using namespace std;

package::package(user sender, user receiver,double weight,double price)
{
	/*use the information in the user to initialze the variate in the package */
	this->setWeight(weight);
	this->setPrice(price);
	this->setSenderName(sender.returnName());
	this->setSenderAddress(sender.returnAddress());
	this->setSenderCity(sender.returnCity());
	this->setSenderState(sender.returnState());
	this->setSenderZip_code(sender.returnZip_code());
	this->setRecipientName(receiver.returnName());
	this->setRecipientAddress(receiver.returnAddress());
	this->setRecipientCity(receiver.returnCity());
	this->setRecipientState(receiver.returnState());
	this->setRecipientZip_code(receiver.returnZip_code());
	this->setType();
}

void package::setWeight(double weight)
{
	this->weight = weight;
}

void package::setPrice(double price)
{
	this->price = price;
}

void package::setSenderName(string name)
{
	this->senderName = name;
}

void package::setSenderAddress(string address)
{
	this->senderAddress = address;
}

void package::setSenderCity(string city)
{
	this->senderCity = city;
}

void package::setSenderState(string state)
{
	this->senderState = state;
}

void package::setSenderZip_code(string zip_code)
{
	this->senderZip_code = zip_code;
}

void package::setRecipientName(string name)
{
	this->recipientName = name;
}

void package::setRecipientAddress(string address)
{
	this->recipientAddress = address;
}

void package::setRecipientCity(string city)
{
	this->recipientCity = city;
}

void package::setRecipientState(string state)
{
	this->recipientState = state;
}

void package::setRecipientZip_code(string zip_code)
{
	this->recipientZip_code = zip_code;
}

double package::calPrice()
{
	return price*weight;
}

double package::returnWeight()
{
	return weight;
}
double package::returnPrice()
{
	return price;
}
string package::returnSenderName()
{
	return senderName;
}
string package::returnSenderAddress()
{
	return senderAddress;
}
string package::returnSenderCity()
{
	return senderCity;
}
string package::returnSenderState()
{
	return senderState;
}
string package::returntSenderZip_code()
{
	return senderZip_code;
}
string package::returnRecipientName()
{
	return recipientName;
}
string package::returnRecipientAddress()
{
	return recipientAddress;
}
string package::returnRecipientCity()
{
	return recipientCity;
}
string package::returnRecipientState()
{
	return recipientState;
}
string package::returnRecipientZip_code()
{
	return recipientZip_code;
}

void package::setType()
{
	type = "Regular Delivery";
}

string package::returnType()
{
	return type;
}