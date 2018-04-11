//express.cpp -- values of expressions
#include<iostream>
int main(int argc, char const *argv[])
{
	using namespace std;
	int x;

	cout << "The expressions x = 100 has the values " ;
	cout << ( x = 100 ) << endl;
	cout << "Now x = " << x << endl;
	cout << "The expressions x < 3  has the values " ;
	cout << ( x < 3 ) << endl;
	cout << "The expressions x > 3  has the values " ;
	cout << ( x > 3 ) << endl;
	cout.setf(ios_base::boolalpha);
	cout << "The expressions x < 3  has the values " ;
	cout << ( x < 3 ) << endl;
	cout << "The expressions x > 3  has the values " ;
	cout << ( x > 3 ) << endl;
	
	return 0;
}