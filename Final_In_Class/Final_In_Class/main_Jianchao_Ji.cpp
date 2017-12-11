#include<iostream>
#include<stack>
#include<deque>
#include<algorithm>
#include<numeric>
#include<iterator>

using namespace std;



bool great6(int x);
void half(int x);


int main()
{
	deque<int> dequeStack;
	int number[10] = { 8,7,0,5,1,9,2,6,4,3 };
	int i,sum;

	

	for (i = 0; i < 10; i++)
	{
		dequeStack.push_front(number[i]);
	}
	dequeStack.erase(remove(dequeStack.begin(), dequeStack.end(), 7),dequeStack.end());

	
	replace_if(dequeStack.begin(), dequeStack.end(),great6, 10);
	
	sum=accumulate(dequeStack.begin(), dequeStack.end(), 0);
	dequeStack.push_front(sum);
	cout << "The sum of the numbers 0 to 9 after removing 7 and replacing values greater than 6 with 10 is: " << endl;
	deque<int>::iterator it = dequeStack.begin(); 
	
		cout << *it << ' '<<endl;
	

	int count = count_if(dequeStack.begin(), dequeStack.end(), great6);
	cout << "Now the number of elements greater than 6 is " << count<<endl;
	

	for_each(dequeStack.begin(), dequeStack.end(), half);
	cout << "The half of every element in the deque is: " << endl;
	for (deque<int>::iterator it = dequeStack.begin(); it != dequeStack.end(); it++)
	{
		cout << *it << ' ';
	}

	sort(dequeStack.begin(), dequeStack.end());
	deque<int>::iterator location;
	 location=find(dequeStack.begin(), dequeStack.end(),6);

	 cout << " After sorting, the location of 6 is at index :";
  ostream_iterator< int > output(cout, " ");

	 copy(dequeStack.begin(), dequeStack.end(), output);
	system("pause");
	return 0;
}

bool great6(int x)
{
	return x > 6;
}

void half(int x)
{
	double y = x / 2;
	cout << y;
	
}