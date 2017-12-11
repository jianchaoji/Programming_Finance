#include <iostream>
#include <string>

using namespace std;

int Recursion(string,char, int);
int i=0;
int main()
{
	string s;
	char c;
	
	cout << "Please input the String" << endl;
	getline(cin, s);
	cout << "Please input the character you want to count" << endl;
	cin.get(c);
	cout << "There are " << Recursion(s, c, i) << " '" << c  <<"' in the string" << endl;

	return 0;
}

int  Recursion(string s, char c,int i)
{
	if (s[i] == '\0')
		return 0;
	if (s[i] == c)
	{
		i++;
		return 1 + Recursion( s, c,i);
	}
	if (s[i] != c)
	{
		i++;
		return   Recursion( s, c,i);
	}
	return 0;
}