//bondini.cpp -- using escape sequences

#include<iostream>

int main(int argc, char const *argv[])
{
	using namespace std;
	cout << "\a Operation \"HyperHype\" is now activated! \n";
	cout << "Enter your agent code : ________\b\b\b\b\b\b\b\b";
	long code;
	cin >> code;
	cout << "\a You entered " << code << "... \n";
	cout << "\a Code verified! Proceed with Plan z3! \n";
	return 0;
}