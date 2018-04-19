//ifelseif.cpp -- using if else if else
#include<iostream>
const int Fave = 27;
int main(int argc, char const *argv[])
{
	using namespace std;
	int n;

	cout << "Enter a number in the range 1-100 to find ";
	cout << "my favorite number: ";

	do{
		cin >> n;
		if (n < Fave)
		{
			/* code */
			cout << "Too low -- guess again: \n";
		}
		else if (n > Fave)
		{
			/* code */
			cout << "Too high -- guess again: \n";
		}
		else{
			cout << Fave << " is right! \n";
		}
	}while(n != Fave);
	return 0;
}