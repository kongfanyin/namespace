#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include"namesp.h"
void other();
void another();

int main(char argc, char** argv)
{
	using debts::Debt;
	using debts::showDebt;
	Debt golf = { {"Benny","Goatsniff"},120.0 };
	showDebt(golf);
	other();
	another();
	return 0;
}
void other()
{
	using std::cout;
	using std::endl;
	using namespace debts;
	Person dg = { "Doodle","Glister" };
	showPerson(dg);
	cout << endl;
	Debt zippy[3];
	for (int i = 0; i < 3; i++)
	{
		getDebt(zippy[i]);
	}
	cout << "total debt: $" << sumDebts(zippy, 3);

}
void another()
{
	using per::Person;
	Person collercter = { "Milo","Rightshift" };
	per::getPerson(collercter);
	std::cout << "\n";
}