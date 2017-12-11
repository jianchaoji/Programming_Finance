#include<iostream>
#include"TwoDayPackage_Jianchao_Ji.h"
#include"OvernightPackage_Jianchao_Ji.h"
#include"Package_Jianchao_Ji.h"
#include"user_Info_Jianchao_Ji.h"
#include<vector>
#include<iomanip>
#include <string>

using namespace std;

void print(package*);
int main()
{
	vector<package*> store(3);
	/*initialize the user*/
	user John_Smith =user("John Smith","1 Davidson Road","Piscataway","NJ","08888");
	user Tom_Smith= user( "Tom Smith", "2 Davidson Road", "Piscataway","NJ", "08889");
	user Mary_Smith = user("Mary Smith", "3 Davidson Road", "Piscataway","NJ", "08890");
	user Jennifer_Smith = user("Jennifer Smith", "4 Davidson Road", "Piscataway","NJ", "08899");
	package package1 = package(John_Smith, Tom_Smith,10,0.5);
	package package2 = TwoDayPackage(Mary_Smith, Jennifer_Smith,5,2.5);
	package package3= OvernightPackage(John_Smith, Mary_Smith, 2, 5.5);
	
	store[0] = &package1;
	store[1] = &package2;
	store[2] = &package3;

	cout << "Package delivery services program" << endl << endl;
	cout << "Cost per ounce for a package:  $.50/ounce" << endl;
	cout << "Additional cost for two day delivery:  $2.00/ounce" << endl;
	cout << "Additional cost for overnight delivery: $5.00/ounce" << endl;
	cout << endl;
	cout << "Package 1:" << endl << endl;
	print(store[0]);
	cout << endl;
	cout << "Package 2:" << endl << endl;
	print(store[1]);
	cout << endl;
	cout << "Package 3:" << endl << endl;
	print(store[2]);
	cout << endl;
	cout << "Total cost of all the packages: $" << store[0]->calPrice() + store[1]->calPrice() + store[2]->calPrice();

	return 0;
}

//this is the output function
void print(package* store)
{
	cout << "Sender:" << endl;
	cout << store->returnSenderName() << endl;
	cout << store->returnSenderAddress() << endl;
	cout << store->returnSenderCity() << endl;
	cout << store->returnSenderState() << " ";
	cout << store->returntSenderZip_code() << endl << endl;
	cout << "Recipient:" << endl;
	cout << store->returnRecipientName() << endl;
	cout << store->returnRecipientAddress() << endl;
	cout << store->returnRecipientCity() << endl;
	cout <<store->returnRecipientState()<<" ";
	cout << store->returnRecipientZip_code() << endl << endl;
	cout << "Weight of package:" << store->returnWeight() << " ounces" << endl;
	cout << "Type of delivery:" << store->returnType() << endl;
	cout << "Cost of Package: $" << store->calPrice() << endl;
}
