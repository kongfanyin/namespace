#pragma once
#include<string>
namespace per
{
	struct Person
	{
		std::string Fname;
		std::string Lname;
	};
	void getPerson(Person &p1);
	void showPerson(const Person &p1);
}


namespace debts
{
	using namespace per;
	struct Debt
	{
		Person name;
		double amount;
	};
	void getDebt(Debt &d1);
	void showDebt(const Debt &d2);
	double sumDebts(const Debt* arr, int n);
}