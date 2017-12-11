#include<iostream>
#include"ISBN.h"

using namespace std;

isbn::isbn() 
{
	num_in_list = 0;  //initialize the number of book in the list
	sorted = 0;
};

void isbn:: insert(int new_element)
{
	num_in_list++;   //the number of book in the list add one since there is a new book added in the list
	my_list[num_in_list - 1] = new_element;
}

void isbn::insert_at( int at_position, int new_element)
{
	int i;
	if (at_position <= num_in_list)
	{
		num_in_list++;

		for (i = num_in_list; i > at_position - 1; i--)
		{
			my_list[i] = my_list[i - 1];
		}
		my_list[at_position - 1] = new_element;
	}
	else
	{
		cout << "The position is out of the list";
	}
}

int isbn::find_linear( int element)
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

int isbn::find_binary(int element)
{

	int  low = 0, mid, high = num_in_list - 1;
	mid = (low + high) / 2;
	if (sorted == 0)
	{
		cout << "The list is not sorted already" << endl;
		return 0;
	}
	while (1)
	{
		if (my_list[mid] == element)
		{
			cout << "The element you want to find is at position " << mid + 1 << endl;
			return 0;
		}
		else if (my_list[mid] > element)
		{
			high = mid;
			mid = (mid + high) / 2;
		}
		else if (mid == low || mid == high)
		{
			cout << "The element you want to find is not in the list." << endl;
			return 0;
		}
	}

}

void isbn::delete_item_position(int position)
{
	int i;   // the number of book in the list reduce one since there is a new book deleted in the list
	if (position > num_in_list)
	{
		cout << "The position is out of the list" << endl;

	}
	else
	{
		for (i = position; i <= num_in_list; i++)
		{
			my_list[i - 1] = my_list[i];
		}
		num_in_list--;
	}
}

void isbn::delete_item_isbn( int element)
{
	int position1;
	int judge = 0, i;
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
		
	}
	else
	{
		for (i = 0; i < num_in_list; i++)
		{
			if (my_list[i] == element)
			{
				position1 = i;

				break;
			}
		}

		for (i = position1; i <= num_in_list; i++)
		{
			my_list[i - 1] = my_list[i];
		}
		num_in_list--;
	}
}

void isbn::sort_list_selection()
{
	int	*p = my_list;
	int min, count;
	int i, j;
	for (i = 0; i < num_in_list; i++)
	{
		min = *(p + i);
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
	sorted = 1;
}

void isbn::sort_bubble()
{
	int	*p = my_list;
	int i, j;
	for (i = 0; i < num_in_list; i++)
	{
		for (j = i; j < num_in_list - 1; j++)
		{
			if (*(p + j) > *(p + j + 1))    //exchange the number of the element
			{
				*(p + j) ^= *(p + j + 1);
				*(p + j + 1) ^= *(p + j);
				*(p + j) ^= *(p + j + 1);
			}
		}
	}
	sorted = 1;

}

void isbn::print()
{
	int i;
	cout << "Yout list now is: " << endl;
	for (i = 0; i < num_in_list; i++)
	{
		cout << i + 1 << ". " << my_list[i] << endl;

	}
}

