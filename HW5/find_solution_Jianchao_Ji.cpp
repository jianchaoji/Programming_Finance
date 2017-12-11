#include<iostream>

using namespace std;
 
int recursion(int [100],int);
int main()
{
	int count, i,start,result;
	
	int number[100];
	for (i = 0; i < 100; i++)
	{
		number[i] = -1;
	}
	cout << "Please input the number" << endl;
	cin >> count;
	cin >> start;
	for (i = 0; i < count; i++)
	{
		cin >> number[i];
	}
	result=recursion(number,start);
	switch(result)
	{
	case 1: {cout << "True!" << endl; break; }
	case -1: {cout << "False!" << endl; break; }
	}

	return 0;
}

int recursion(int number[100],int start)
{
	int temp,move_position;
	move_position = number[start];
	temp = start;
	if (move_position == 0)
	{
		return 1;
	}
	if (start > 0)
	{
		number[start] = -1;      //change the value that has been used to -1
		start = start+ move_position;
		if (move_position == -1)
		{
			return -1;      //if the position is out of the list return -1
		}
		return recursion(number, start);
	}

	if (start < 0)       //if move to the right cannot work then move to the left
	{
		start = temp;
		number[start] = -1;
		start = start - move_position;
		if (number[start] == -1||start<0)//if the position is out of the list return -1;
		{
			return -1;
		}
		return recursion(number, start);
	}
	
	
}