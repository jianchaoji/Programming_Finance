#include<iostream>

using namespace std;

void insert(int my_list[],int num_in_list,int new_element);
void insert_at(int my_list[],int num_in_list,int at_position, int new_element);
int find_linear(int my_list[], int num_in_list, int element);
int find_binary(int my_list[], int num_in_list, int element, bool sorted);
void delete_item_position(int my_list[], int num_in_list, int position);
void delete_item_isbn(int my_list[], int num_in_list, int element);
void sort_list_selection(int my_list[], int num_in_list);
void sort_bubble(int my_list[],int num_in_list);
void print(int my_list[],int num_in_list);
int main()
{
	
	int my_list[20] = {0};
	int num_in_list, new_element, at_position, element, position,number_in_list;
	bool sorted;
	int choice;
	num_in_list = 0;
	cout << "Welcome to the Book list program." << endl;
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
				 sorted = 0;          
				 num_in_list++;
				 insert(my_list,num_in_list,new_element);
				 break;
			 }
			 case 2: 
			 {
				 cout << "Please input the element " << endl;
				 cin >> new_element;
				 cout << "At what position" << endl; 
			     cin >> at_position;
				 if (at_position > num_in_list)
				 {
					 cout << "The position is out of the list" << endl;
					 break;
				 }
				 sorted = 0;
				 num_in_list++;
				 insert_at( my_list, num_in_list, at_position, new_element);
				 print(my_list, num_in_list);
				 break;
			 }
			 case 3: 
			 {
				 cout << "Please input the element you want to find" << endl;
				 cin >>element;
				 find_linear(my_list, num_in_list, element);
				 print(my_list, num_in_list);
				 break;
			 }
			 case 4: 
			 {
				 cout << "Please input the element you want to find" << endl;
				 cin >> element;
				 find_binary(my_list, num_in_list,element,sorted);
				 print(my_list, num_in_list);

				 break;
			 }
			 case 5: 
			 {
				 cout << "Please input the position you want to delete" << endl;
				 cin >> position;
				 if (position > num_in_list)
				 {
					 cout << "The position is out of the list" << endl;
					 break;
				 }
				 delete_item_position( my_list,  num_in_list,  position);
				 num_in_list--;
				 print(my_list, num_in_list);
				 break;
			 }
			 case 6: 
			 {   
				 int judge=0,i;
				 cout << "Please input the element you want to delete" << endl;
				 cin >> element;
				 for (i = 0; i < num_in_list; i++)  //judge if the element is in the list
				 {
					 if (my_list[i] == element)
					 {
						 judge = 1;  
						 break;
					 }
				 }
				 if (judge == 0)
				 {
					 cout << "The element you want to delete is not in the list." << endl;
					 break;
				 }
				 delete_item_isbn(my_list, num_in_list, element);
				 num_in_list--;
				 print(my_list, num_in_list);
				 break;
			 }
			 case 7: 
			 {
				 sort_list_selection( my_list,  num_in_list);
				 sorted = 1;
				 print(my_list, num_in_list);
				 break;
			 }
			 case 8: 
			 {
				 sort_bubble(my_list, num_in_list);
				 sorted = 1;
				 print(my_list, num_in_list);
				 break;
			 }
			 case 9: 
			 {
				 print(my_list, num_in_list);
				 break;
			 }
			 case 0: return 0;
		}
		
	}

	
	return 0;
}


void insert(int my_list[], int num_in_list, int new_element)
{
	my_list[num_in_list-1] = new_element;
	print(my_list,num_in_list);
}

void insert_at(int my_list[], int num_in_list, int at_position, int new_element)
{
	int i;
	for (i=num_in_list;i>at_position-1;i--)
	{
		my_list[i] = my_list[i-1];
	}
	my_list[at_position-1] = new_element;
}

int find_linear(int my_list[], int num_in_list, int element)
{
	int i;
	for (i = 0; i < num_in_list; i++)
	{
		if (my_list[i] == element)
		{
			cout << "The element you want to find is at position " << i + 1 << endl;
			return i;
		}
	}
	cout << "The element you want to find is not in the list." << endl;
	return 0;
}

int find_binary(int my_list[], int num_in_list, int element, bool sorted)
{
	
	int  low=0, mid, high=num_in_list-1;
	mid = (low + high) / 2;
	if (sorted == 0)
	{
		cout << "The list is not sorted already" << endl;
		return 0;
	}
	while(1)
	{
		if (my_list[mid] == element)
		{
		  cout << "The element you want to find is at position " << mid + 1 << endl;
			return 0;
		}
		else if (my_list[mid] > element)
		{
			high = mid;
			mid = (mid+high)/2;
		}
		else if (mid == low || mid == high)
		{
			cout << "The element you want to find is not in the list." << endl;
			return 0;
		}
	}

}

void delete_item_position(int my_list[], int num_in_list, int position)
{
	int i;
	for (i = position; i <= num_in_list; i++)
	{
		my_list[i - 1] = my_list[i];
	}
}

void delete_item_isbn(int my_list[], int num_in_list, int element)
{
	int position,i;
	for (i = 0; i < num_in_list; i++)
	{
		if (my_list[i] == element)
		{
			position = i; 
			
			break;
		}
	}
	
	for (i = position; i <= num_in_list; i++)
	{
		my_list[i - 1] = my_list[i];
	}

}

void sort_list_selection(int my_list[], int num_in_list)
{
   int	*p = my_list;
   int min,count;
   int i, j;
   for (i = 0; i < num_in_list; i++)
   {
	   min = *(p+i);
	   count = i;
	   for (j = i; j < num_in_list; j++)
	   {
		   if (min > *(p + j))
		   {
			   min = *(p + j);
			   count = j;
		   }
	   }
	   *(p + count) = *(p + i);
	   *(p + i) = min;
   }
}

void sort_bubble(int my_list[], int num_in_list)
{
	int	*p = my_list;
	int i, j;
	for (i = 0; i < num_in_list; i++)
	{
		for (j = i; j < num_in_list-1; j++)
		{
			if (*(p + j) > *(p + j+1))    //exchange the number of the element
			{
				*(p + j) ^= *(p + j+1);
				*(p + j+1) ^= *(p + j);
				*(p + j) ^= *(p + j+1);
			}
		}
	}

}

void print(int my_list[], int num_in_list)
{
	int i;
	cout << "Yout list now is: " << endl;
	for (i = 0; i < num_in_list; i++)
	{
		cout << i+1 <<". " <<my_list[i] << endl;

	}
}