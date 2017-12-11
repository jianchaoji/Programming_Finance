#include<iostream>
#include<cmath>

using namespace std;

int square(int ,int);

int main()
{
	int num,stored;
	cout << "Please input a positive integer you want to do the pow operation" << endl;
	cin >> num;
	if (num <= 0)
	{
		cout << "You input a wrong number" << endl;
		return 0;
	}
	stored = num;
	square(num, stored);
	system("pause");
	return 0;
}

int square(int num,int stored)
{
	if (num > 0)                 //output the square of odd number
	{
		if (num % 2 == 0)
		{
			num--;
		}
		
			cout << pow(num,2)<<" ";
			return square(num-2,stored);
		
	}
	 
	if (num == -1)          //if the num is -1 change it to -2 to output the square of even numbers
	{
		num = num -1;
	}
		
		if (num >= -stored )   //output the square of even number
		{
			cout << pow(num, 2) << " ";
			return square(num-2,stored);
		}

	return 0;
}