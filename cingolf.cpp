//cingolf.cpp
#include<iostream>
const int MAX = 5;

int main(int argc, char const *argv[])
{
	using namespace std;
	int golf[MAX];
	cout << "Please enter your golf scores.\n";
	cout << "You must enter " << MAX << " rounds.\n";
	int i;
	for ( i = 0; i < MAX; ++i)
	{
		/* code */
		cout << "round #" << i + 1 << " : ";
		while (!(cin >> golf[i])) {
			cin.clear();
			while (cin.get() != '\n') {
				continue;
			}
			cout << "Please enter a number : ";

		}
	}

	double total = 0.0;
	for (int i = 0; i < MAX; ++i)
	{
		/* code */
		total += golf[i];
	}

	cout << total / MAX << " = average score " << MAX << " rounds\n";
	return 0;
}