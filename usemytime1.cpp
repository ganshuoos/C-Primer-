//usetime0.cpp -- using the frist draft of Time class compile usetime0.cpp and mytime0.cpp together
#include<iostream>
#include"mytime1.h"

int main(int argc, char const *argv[])
{
	using std::cout;
	using std::endl;
	Time planning;
	Time coding(2,40);
	Time fixing(5,55);
	Time total;

	cout << "planning time = ";
	planning.show();
	cout << endl;

	cout << "fixing time = ";
	fixing.show();
	cout << endl;

	cout << "coding time = ";
	coding.show();
	cout << endl;

	total = coding + fixing;
	cout << "coding + fixing = ";
	total.show();
	cout << endl;
	
	return 0;
}