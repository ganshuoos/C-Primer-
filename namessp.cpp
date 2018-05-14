//namessp.cpp -- using namespaces
#include<iostream>
#include"namesp.h"

void other(void);
void another(void);
int main(int argc, char const *argv[])
{
	using debts::Debt;
	using debts::showDebt;
	Debt golf = {{"Benny" , "Goatsniff"} , 120.0};
	showDebt(golf);
	other();
	another();
	return 0;
}

void other(void){
	using std::cout;
	using std::endl;
	using namespace debts;
	Person dg = {"Doodles","Glister"};
	showPerson(dg);
	cout << std::endl;
	Debt zippy[3];
	int i;

	for (int i = 0; i < 3; ++i)
	{
		/* code */
		getDebt(zippy[i]);
	}

	//这里exe闪退  待解决
	for (int i = 0; i < 3; ++i)
	{
		/* code */
		showDebt(zippy[i]);
	}

	cout << "Total debt : $" << sumDebts(zippy,3) << std::endl;
}

void another(void){
	using pers::Person;
	Person collector = {"Milo","Rightshift"};
	pers::showPerson(collector);
	std::cout << std::endl;
}

