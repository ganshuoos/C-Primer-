//condit.cpp -- using the conditional operator
#include<iostream>
int main(int argc, char const *argv[])
{
	using namespace std;
	int a, b;
	cout << "Enter two integer: ";
	cin >> a >> b ;
	cout << "The larger of " << a << " and " << b;
	int c = a > b ? a : b ;
	cout << " is " << c << endl;

	return 0;
}