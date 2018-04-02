//hexoct2.cpp -- display values in hex and octal

#include<iostream>

int main(int argc, char const *argv[])
{
	using namespace std;
	int chest = 42 ;
	int waist = 0x42 ;
	int inseam = 042 ;

	cout << "Monsieur cuts a striking figure!" << endl ;
	cout << "chest = " << chest << " ( decimal ) " << endl ;
	cout << hex ;				//manipulator for changing number base 
	cout << "waist = " << waist << " ( hexoctdecimal ) " << endl;
	cout << oct ;				//manipulator for changing number base
	cout << "inseam = " << inseam << " ( cotal ) " << endl; 

	return 0;
}