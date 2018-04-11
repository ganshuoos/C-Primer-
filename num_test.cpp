//num_test.cpp -- use numeric test in for loop
#include<iostream>
int main(int argc, char const *argv[])
{
	using namespace std;
	cout << "Enter the starting countdown value: ";
	int limit;
	cin >> limit ;
	int i ;
	for(i = limit ; i ; i--)
	cout << "\n i = " << i << " \n" ;
	cout << "Done now that i = " << i << "\n"; 
	return 0;
}