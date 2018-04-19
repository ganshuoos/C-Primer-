//and.cpp -- using the logical AND operator
#include<iostream>
const int ArSize = 6;
int main(int argc, char const *argv[])
{
	using namespace std;
	float naaq[ArSize];

	cout << "Enter the NAQQs(New Age Awareness Quotients)";
	cout << "of \n your neighbors. Program terminates ";
	cout << "when you make\n " << ArSize << " entries";
	cout << "or enter a negative value.\n";

	int i = 0;
	float temp;
	cout << "Frist value : ";
	cin >> temp;
	while (i < ArSize && temp >= 0) {
		naaq[i] = temp;
		++i;
		if ( i < ArSize )
		{
			/* code */
			cout << "Next value: ";
			cin >> temp;
		}
	}

	if (i == 0)
	{
		/* code */
		cout << "No data--bye\n ";
	}
	else {
		cout << "Enter your NAAQ : ";
		float you;
		cin >> you;
		int count = 0;
		for (int j = 0; j < i ; ++j)
		{
			/* code */
			if (naaq[j] > you)
			{
				/* code */
				++count;
			}
		}
		cout << count;
		cout << "of your neighbors have greater awareness of \n";
		cout << "the New Age than you do.\n";
	}
	return 0;
}