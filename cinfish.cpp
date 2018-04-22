//cinfish.cpp -- non-numeric input terminates loop
#include<iostream>
const int MAX = 5;

int main(int argc, char const *argv[])
{
	using namespace std;
	double fish[MAX];
	cout << "Please enter the weights of your fish.\n";
	cout << "You may enter up to " << MAX
	     << "fish <q to terminate>. \n";

	cout << "fish #1: ";
	int i = 0 ;
	while ( i < MAX && cin >> fish[i]) {
		if (++i < MAX)
		{
			cout << "fish #" << i + 1 << " : ";
		}
	}

	double total = 0.0 ;
	for (int j = 0; j < i; ++j)
	{
		/* code */
		total += fish[i];
	}

	if (i == 0)
	{
		/* code */
		cout << "No fish!\n";
	}
	else {
		cout << total  << " = average weight of "
		     << i << " fish \n";
	}
	cout << " Done!";
	return 0;
}