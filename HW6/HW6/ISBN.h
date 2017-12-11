#pragma once

using namespace std; 
class isbn
{
	
public :
	isbn();
	
	void insert( int new_element);
	void insert_at( int at_position, int new_element);
	int find_linear( int element);
	int find_binary( int element);
	void delete_item_position( int position);
	void delete_item_isbn( int element);
	void sort_list_selection();
	void sort_bubble();
	void print();

private:
	int choice;
	int my_list[20] = { 0 };
	int num_in_list, new_element, at_position, element, position;
	bool sorted;
};

