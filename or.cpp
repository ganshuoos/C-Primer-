//or.cpp -- using the logical OR operator
#include<iostream>
int main(int argc, char const *argv[])
{
	using namespace std;
	cout << "This program may reformat your hard disk\n";
	cout << "and destroy all your data.\n";
	cout << "Do you wish to continue ? <y/n>\n";

	char ch;
	cin >> ch;
	if (ch == 'y'||ch =='Y')
	{
		/* code */
		cout << "You were warned !\a\a\n";
	}
	else if (ch == 'n'||ch == 'N')
	{
		/* code */
		cout << "A wish choice ... bye\n";
	}
	else
	{
		cout << "That wasn't a y or an n , so I guess I'll";
		cout << " trash your disk anyway.\a\a\a\n";
	}

	return 0;
}