//twoarg -- a function with 2 argument
#include<iostream>
void n_chars(char , int);

int main(int argc, char const *argv[])
{
	using namespace std;
	int times;
	char ch;

	cout << "Enter a character: ";
	cin >> ch;

	while ( ch != 'q') {
		cout << "Enter a integer: ";
		cin >> times;
		n_chars(ch, times);
		cout << "\nEnter another character or press the"
		     "q-key to quit: ";
		cin >> ch;
	}

	cout << "The value of times is " << times << ".\n";
	cout << "Bye!\n";
	return 0;
}

void n_chars( char c , int n) {
	using namespace std;
	while (n-- > 0) {
		cout << c;
	}
}