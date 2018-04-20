//cctype.cpp
#include<iostream>
#include<cctype>
int main(int argc, char const *argv[])
{
	using namespace std;
	cout <<"Enter text for analysis , and type @ ";
	cout <<"to terminate input. \n";

	char ch;
	int whitespace = 0;
	int digits = 0;
	int chars = 0;
	int punct = 0;
	int others = 0;

	cin.get(ch);
	while(ch != '@'){
		if (isalpha(ch))
		{
			/* code */
			chars++;
		}
		else if (isspace(ch))
		{
			/* code */
			whitespace++;
		}
		
		else if (isdigit(ch))
		{
			/* code */
			digits++;
		}
		else if (ispunct(ch))
		{
			/* code */
			punct++;
		}
		else
			others++;
		cin.get(ch);			
	}

	cout << chars << " letters, " << whitespace << " whitespace, ";
	cout << digits << " digits, " << punct << " punct, " << others <<" others.\n";

	return 0;
}