#include<iostream>
#include"LinkList_Jianchao_Ji.h"
#include"Node_Jianchao_Ji.h"

using namespace std;

int main()
{
	LinkedList list;
	int choice;
	while (1)
	{
		cout << "Welcome to the shopping list program" << endl;
		cout << "Please choose an option:" << endl;
		cout << "1.  Add a new node at the beginning" << endl;
		cout << "2.  Add a new node at the end" << endl;
		cout << "3.  Remove the beginning node" << endl;
		cout << "4.  Remove the end node" << endl;
		cout << "5.  Remove a node from the list by entering an item number" << endl;
		cout << "6.  Remove a node from the list by entering an item name" << endl;
		cout << "7.  Print out the list" << endl;
		cout << "8.  Quit the program" << endl;

		cin >> choice;

		switch(choice)
		{
		case 1:
		{
			int number;
			string name;
			Node*newPtr;
			cout << "Please enter product number to insert at beginning" << endl;
			cin >> number;
			cout << "Please enter the name for the product" << endl;
			cin >> name;
			newPtr = new Node(name,number);
			list.addToStart(newPtr);
			break;
		}

		case 2:
		{
			int number;
			string name;
			Node*newPtr;
			cout << "Please enter product number to insert at beginning" << endl;
			cin >> number;
			cout << "Please enter the name for the product" << endl;
			cin >> name;
			newPtr = new Node(name, number);
			list.addToEnd(newPtr);
			break;
		}

		case 3:
		{
			if (list.removeFromStart() == 0)
			{
				cout << "This is a blank list." << endl;
			}
			break;
		}

		case 4:
		{
			if (list.removeFromEnd()== 0)
			{
				cout << "This is a blank list." << endl;
			}
			break;
		}

		case 5:
		{
			int count;
			cout << "Please input the order that you want to delete." << endl;
			cin >> count;
			list.removeNodeFromList(count);
			break;
		}

		case 6:
		{
			string name;
			cout << "Please input the name that you want to delete." << endl;
			cin >> name;
			list.removeNodeFromList(name);
			break;
		}

		case 7:
		{
			list.printList();
			break;
		}

		case 8:
		{
			return 0;
		}
			
		}
	}
	return 0;
}