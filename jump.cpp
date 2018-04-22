//jump.cpp -- using continue and break
#include<iostream>
const int ArSize = 80;

int main(int argc, char const *argv[])
{
	using namespace std;
	char line[ArSize];
	int spaces = 0;

	cout << "Enter a line of text: \n";
	cin.get(line, ArSize);
	cout << "Complete line : \n" << line << endl;
	cout << "Line through frist period: \n";
	for (int i = 0; line[i] != '\0'; ++i)
	{
		/* code */
		cout << line[i] ;
		if (line[i] == '.')
		{
			/* code */
			break;
		}
		if (line[i] == ' ' )
		{
			/* code */
			continue;
		}
		spaces++;
	}

	cout << endl << spaces << " spaces \n";
	cout << "Done.\n";

	return 0;
}