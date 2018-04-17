//comstr2.cpp -- comparing strings
#include<iostream>
#include<string>				//string class
int main(int argc, char const *argv[])
{
	/* code */
	using namespace std;
	string word = "?ate";

	for (char ch = 'a'; word != "mate"; ch++)
	{
		/* code */
		cout << word << endl;
		word[0] = ch ;
	}

	cout << "After loop ends , word is " << word << endl;
	return 0;
}