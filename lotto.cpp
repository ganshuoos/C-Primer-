//lotto.cpp -- probability of winning
#include<iostream>
long double probability(unsigned numbers,unsigned picks);
int main(int argc, char const *argv[])
{
	using namespace std;
	double total,choice;

	cout << "Enter the total number of choice on the game card and \n";
	cout << "the number of picks allowed: \n";

	while((cin >> total >> choice) && choice <= total){
		cout << "You have one chance in ";
		cout << probability(total,choice);
		cout << "of winning. \n";
		cout << "Next two numbers(q to quit): ";
	}

	cout << "bye!\n";
	return 0;
}

long double probability(unsigned numbers,unsigned picks){
	long double result = 1.0;
	long double n ;
	unsigned p;

	for (n = numbers , p = picks ; p > 0 ; n-- , p--)
	{
		/* code */
		result = result * n / p ;
	}

	return result;
}
