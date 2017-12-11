#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;


void input(vector<vector<double> > &,int,int);
void printArray(vector<vector<double> > &, int, int);
void addition();
void subtraction();
void mutiplication();
void determinant();
void transpose();
void inverse();

int main()
{

	
	int  choice;
	while (1)
	{
		cout <<"Menu" << endl;
		cout << "\n Choice 1: Addition" << endl;
		cout << "\n Choice 2: Subtraction" << endl;
		cout << "\n Choice 3: Mutiplication" << endl;
		cout << "\n Choice 4: Determinant" << endl;
		cout << "\n Choice 5: Transpose" << endl;
		cout << "\n Choice 6: Inverse" << endl;
		cout << "\n Choice 7: Exit" << endl;
		cout << "\nPlease input a choice" << endl;
		cin >> choice ;
		switch (choice)
		{
		case 1: {addition(); break; }
		case 2: {subtraction(); break; }
		case 3: {mutiplication(); break; }
		case 4: {determinant(); break; }
		case 5: {transpose(); break; }
		case 6: {inverse(); break; }
		case 7: {return 0; }
		}
		if (choice == 0)break;
		
	}
	

	return 0;
}

void input(vector<vector<double> >  &a, int line,int column)
{
	int i,j;

	for (i = 0; i < line; i++)
	{
		for (j = 0; j < column; j++)
		{
			cin >> a[i][j];
		}
	}
}

void printArray(vector<vector<double> > &a, int line , int column)
{
	int i, j;

	for (i = 0; i < line; i++)
	{
		for (j = 0; j < column; j++)
		{
			cout << setw(15)<<a[i][j]<<" ";
		}
		cout << endl;
	}
}
void addition()
{
	vector<vector<double> > matrix1(10, vector<double>(10));
	vector<vector<double> > matrix2(10, vector<double>(10));
	vector<vector<double> > result(10, vector<double>(10));
	int i, j, line1, column1, line2, column2;
	cout << "Please enter the number of line" << endl;
	cin >> line1;
	cout << "Please enter the number of column" << endl;
	cin >> column1;
	cout << "Please enter the values of elements" << endl;
	input(matrix1, line1, column1);
	cout << "Your input is " << endl;
	printArray(matrix1, line1, column1);
	cout << "Please enter the number of line" << endl;
	cin >> line2;
	cout << "Please enter the number of column" << endl;
	cin >> column2;
	cout << "Please enter the values of elements" << endl;
	input(matrix2, line2, column2);
	cout << "Your input is " << endl;
	printArray(matrix2, line2, column2);
	if (line1 != line2 || column1 != column2)   //judge if the calculation can be done
	{
		cout << "The addition can not be done" << endl;
		
	}
	else
	{
		for (i = 0; i < line1; i++)
		{
			for (j = 0; j < column1; j++)
			{
				result[i][j] = matrix1[i][j] + matrix2[i][j];
			}
		}
		cout << "The result is " << endl;
		printArray(result,line1, column1);
	}
}

void subtraction()
{
	vector<vector<double> > matrix1(10, vector<double>(10));
	vector<vector<double> > matrix2(10, vector<double>(10));
	vector<vector<double> > result(10, vector<double>(10));
	int i, j, line1, column1, line2, column2;
	cout << "Please enter the number of line" << endl;
	cin >> line1;
	cout << "Please enter the number of column" << endl;
	cin >> column1;
	cout << "Please enter the values of elements" << endl;
	input(matrix1, line1, column1);
	cout << "Your input is " << endl;
	printArray(matrix1, line1, column1);
	cout << "Please enter the number of line" << endl;
	cin >> line2;
	cout << "Please enter the number of column" << endl;
	cin >> column2;
	cout << "Please enter the values of elements" << endl;
	input(matrix2, line2, column2);
	cout << "Your input is " << endl;
	printArray(matrix2, line2, column2);
	if (line1 != line2 || column1 != column2)   //judge if the calculation can be done
	{
		cout << "The subtraction can not be done" << endl;

	}
	else
	{
		for (i = 0; i < line1; i++)
		{
			for (j = 0; j < column1; j++)
			{
				result[i][j] = matrix1[i][j] - matrix2[i][j];
			}
		}
		cout << "The result is " << endl;
		printArray(result, line1, column1);
	}
}

void mutiplication()
{
	vector<vector<double> > matrix1(10, vector<double>(10));
	vector<vector<double> > matrix2(10, vector<double>(10));
	vector<vector<double> > result(10, vector<double>(10));
	int i, j, line1, column1, line2, column2,flat,k;
	cout << "Please enter the number of line" << endl;
	cin >> line1;
	cout << "Please enter the number of column" << endl;
	cin >> column1;
	cout << "Please enter the values of elements" << endl;
	input(matrix1, line1, column1);
	cout << "Your input is " << endl;
	printArray(matrix1, line1, column1);
	cout << "Please enter the number of line" << endl;
	cin >> line2;
	cout << "Please enter the number of column" << endl;
	cin >> column2;
	cout << "Please enter the values of elements" << endl;
	input(matrix2, line2, column2);
	cout << "Your input is " << endl;
	printArray(matrix2, line2, column2);

	if (column1 != line2)   //judge if the calculation can be done
	{
		cout << "The mutiplication can not be done" << endl;

	}
	else
	{
		for (i = 0; i < line1; i++)
		{
			flat = 0;
			for (k = 0; k < column2; k++)
			{
				for (j = 0; j < column2; j++)
				{
					result[i][flat] += matrix1[i][j] * matrix2[j][flat];
				}
				flat++;
			}
		}
		cout << "The result is " << endl;
		printArray(result, line1, column2);
	}
}

void determinant()
{
	vector<vector<double> > matrix1(10, vector<double>(10));
	double result = 0;
	int i, j, line1, column1;
	cout << "Please enter the number of line" << endl;
	cin >> line1;
	cout << "Please enter the number of column" << endl;
	cin >> column1;
	cout << "Please enter the values of elements" << endl;
	input(matrix1, line1, column1);
	cout << "Your input is " << endl;
	printArray(matrix1, line1, column1);

	if (line1 != 3 || column1 != 3)   //judge if the calculation can be done
	{
		cout << "The operation for the matrix is not supported" << endl;
	}


	if (line1 == 3 && column1 == 3)
	{
		result = matrix1[0][0] * matrix1[1][1] * matrix1[2][2] + matrix1[0][1] * matrix1[1][2] * matrix1[2][0] + matrix1[1][0] * matrix1[2][1] * matrix1[0][2]
			- matrix1[2][0] * matrix1[1][1] * matrix1[0][2] - matrix1[2][1] * matrix1[1][2] * matrix1[0][0] - matrix1[2][2] * matrix1[1][0] * matrix1[0][1];
		cout << "The deterninant of the matrix is " << result << endl;
	}
}

void transpose()
{
	vector<vector<double> > matrix1(10, vector<double>(10));
	vector<vector<double> > result(10, vector<double>(10));
	int i, j, line1, column1;
	cout << "Please enter the number of line" << endl;
	cin >> line1;
	cout << "Please enter the number of column" << endl;
	cin >> column1;
	cout << "Please enter the values of elements" << endl;
	input(matrix1, line1, column1);
	cout << "Your input is " << endl;
	printArray(matrix1, line1, column1);
	for (i = 0; i < line1; i++)
	{
		for (j = 0; j < column1; j++)
		{
			result[j][i] = matrix1[i][j];
		}
	}
	cout << "The result is: " << endl;
	printArray(result, column1, line1);
}

void inverse()
{
	vector<vector<double> > matrix1(10, vector<double>(10));
	vector<vector<double> > result1(10, vector<double>(10));
	int i, j, line1, column1;
	double A1;
	cout << "Please enter the number of line" << endl;
	cin >> line1;
	cout << "Please enter the number of column" << endl;
	cin >> column1;
	cout << "Please enter the values of elements" << endl;
	input(matrix1, line1, column1);
	cout << "Your input is " << endl;
	printArray(matrix1, line1, column1);

	A1 = matrix1[0][0] * matrix1[1][1] * matrix1[2][2] + matrix1[0][1] * matrix1[1][2] * matrix1[2][0] + matrix1[1][0] * matrix1[2][1] * matrix1[0][2]
		- matrix1[2][0] * matrix1[1][1] * matrix1[0][2] - matrix1[2][1] * matrix1[1][2] * matrix1[0][0] - matrix1[2][2] * matrix1[1][0] * matrix1[0][1];

	if (line1 != 3 || column1 != 3)   //judge if the calculation can be done
	{
		cout << "The operation for the first matrix is not supported" << endl;
		for (i = 0; i < line1; i++)
		{
			for (j = 0; j < column1; j++)
			{
				cout << matrix1[i][j] << " ";
			}
			cout << endl;
		}
	}

	if (A1 == 0)
	{
		cout << "The operation for the first matrix is not supported" << endl;
	}
	if (line1 == 3 && column1 == 3 && A1 != 0)
	{
		result1[0][0] = matrix1[1][1] * matrix1[2][2] - matrix1[1][2] * matrix1[2][1] / A1;
		result1[0][1] = matrix1[1][2] * matrix1[2][0] - matrix1[1][0] * matrix1[2][2] / A1;
		result1[0][2] = matrix1[1][0] * matrix1[2][1] - matrix1[1][1] * matrix1[2][0] / A1;
		result1[1][0] = matrix1[0][2] * matrix1[2][1] - matrix1[0][1] * matrix1[2][2] / A1;
		result1[1][1] = matrix1[0][0] * matrix1[2][2] - matrix1[0][2] * matrix1[2][0] / A1;
		result1[1][2] = matrix1[0][1] * matrix1[2][0] - matrix1[0][0] * matrix1[2][1] / A1;
		result1[2][0] = matrix1[0][1] * matrix1[1][2] - matrix1[0][2] * matrix1[1][1] / A1;
		result1[2][1] = matrix1[1][0] * matrix1[0][2] - matrix1[0][0] * matrix1[1][2] / A1;
		result1[2][2] = matrix1[0][0] * matrix1[1][1] - matrix1[1][0] * matrix1[0][1] / A1;
		cout << "The result of  the inverse operation is " << endl;
		printArray(result1, line1, column1);
	}

}
