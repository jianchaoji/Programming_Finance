#include<iostream>
#include"ISBN.h"

using namespace std;

int main()
{

	int new_element, at_position, element, position;

	int choice;  //the choice is used to select which operation to do

	
	isbn book;
	
	while (1)
	{
		cout << "What would you like to do ?" << endl;
		cout << "          1. add an element to end of list." << endl;
		cout << "          2. add an element at a location." << endl;
		cout << "          3. find an element by ISBN number (linear search)." << endl;
		cout << "          4. find an element by ISBN number (binary search)." << endl;
		cout << "          5. delete an element at position." << endl;
		cout << "          6. delete an element by ISBN number." << endl;
		cout << "          7. sort the list(using selection sort)." << endl;
		cout << "          8. sort the list(using bubble sort)." << endl;
		cout << "          9. print the list." << endl;
		cout << "          0. exit." << endl;
		cin >> choice;


		switch (choice)
		{
		case 1:
		{
			cout << "Please input the element " << endl;
			cin >> new_element;
			book.insert(new_element);
			book.print();
			break;
		}
		case 2:
		{
			cout << "Please input the element " << endl;
			cin >> new_element;
			cout << "At what position" << endl;
			cin >> at_position;
			book.insert_at( at_position, new_element);
			book.print();
			break;
		}
		case 3:
		{
			cout << "Please input the element you want to find" << endl;
			cin >> element;
			book.find_linear(element);
			book.print();
			break;
		}
		case 4:
		{
			cout << "Please input the element you want to find" << endl;
			cin >> element;
			book.find_binary(element);
			book.print();

			break;
		}
		case 5:
		{	
			cout << "Please input the position you want to delete" << endl;
			cin >> position;
			book.delete_item_position( position);
		
			book.print();
			break;
		}
		case 6:
		{
			cout << "Please input the element you want to delete" << endl;
			cin >> element;
			book.delete_item_isbn(element);
			book.print();
			break;
		}
		case 7:
		{
			book.sort_list_selection();
			book.print();
			break;
		}
		case 8:
		{
			book.sort_bubble();
			book.print();
			break;
		}
		case 9:
		{
			book.print();
			break;
		}
		case 0: return 0;
		}
	
}

	return 0;
}
