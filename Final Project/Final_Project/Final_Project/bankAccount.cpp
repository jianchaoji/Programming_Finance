#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include"bankAccount.h"
#include<fstream>
#include<iomanip>
#include<string>
#include <time.h>

using namespace std;

bankAccount::bankAccount()
{
	openAccount();
	balance = returnBalance();
}

void  bankAccount::openAccount()
{
	accountBalanceRead.open("Balance.txt", ios::in);
	if (!accountBalanceRead)
	{
		accountBalanceWrite.open("Balance.txt");
		accountBalanceWrite << 10000;
		accountBalanceWrite.close();
		return;
	}
	accountBalanceRead.close();
}

double bankAccount::returnBalance()
{
	double result;
	accountBalanceRead.open("Balance.txt");
	accountBalanceRead >> result;
	accountBalanceRead.close();
	return result;
}

void bankAccount::setBalance()
{
	double result;
	result = balance;
	accountBalanceWrite.open("Balance.txt");
	accountBalanceWrite << result;
	accountBalanceWrite.close();
}

void bankAccount::viewAccount()
{
	cout << "You have $" << returnBalance() << " in your bank account." << endl;
}

void bankAccount::depositMoney()
{
	double deposit;
	double result = returnBalance();
	cout << "Please input the amount you wish to deposit:";
		cin >> deposit;
		result += deposit;
		balance = result;
		this->setBalance();
		accountBalanceWrite.open("bankHistory.txt", ios::app);
		time_t tt = time(NULL);
		tm* t = localtime(&tt);
		accountBalanceWrite << left << setw(10) << "Withdraw" << setw(10) << deposit
			<< " " << t->tm_mon + 1 << "/" << t->tm_mday << "/" << t->tm_year + 1900 << endl;
		accountBalanceWrite.close();
}

void bankAccount::withdrawMoeey()
{
	double withdraw;
	double result = returnBalance();
	cout << "Please input the amount you wish to withdraw:";
	cin >> withdraw;
	if (withdraw > result)
	{
		cout << "Insufficient Money!" << endl;
		return;
	}
	result -= withdraw;
	balance = result;
	this->setBalance();
    accountBalanceWrite.open("bankHistory.txt",ios::app);
	time_t tt = time(NULL);
	tm* t = localtime(&tt);
	accountBalanceWrite << left << setw(10) << "Withdraw" << setw(10) << withdraw
		<< " " << t->tm_mon + 1 << "/" << t->tm_mday << "/" << t->tm_year + 1900 <<  setw(10)<<returnBalance()<<endl;
	accountBalanceWrite.close();

}

void bankAccount::printHistory()
{
	string s;
	int i = 0;
	accountBalanceRead.open("bankHistory.txt");
	while (accountBalanceRead >> s)
	{
		cout << left << setw(10) << s;
		i++;
		if (i % 4 == 0)
			cout << endl;
	}
	cout << endl;
	accountBalanceRead.close();
}