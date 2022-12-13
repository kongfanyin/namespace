#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include"namesp.h"
namespace per
{
	using std::cout;
	using std::cin;
	void getPerson(Person &p1)
	{
		cout << "enter first name pls:\n";
		cin >> p1.Fname;
		cout << "Enter last name pls:\n";
		cin >> p1.Lname;


	}
	void showPerson(const Person &p1)
	{
		cout << p1.Fname << ", " << p1.Lname;
	}
}
namespace debts
{
	using namespace per;
	void getDebt(Debt &d1)
	{
		getPerson(d1.name);
		cout << "Enter debt: \n";
		cin >> d1.amount;

	}
	void showDebt(const Debt &d2)
	{
		showPerson(d2.name);
		cout << ": $ " << d2.amount <<std::endl;
	}
	double sumDebts(const Debt* arr, int n)
	{
		double total = 0;
		for (int i = 0; i < n; i++)
		{
			total += arr[i].amount;
		}
		return total;
	}
}
