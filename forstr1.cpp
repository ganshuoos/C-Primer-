//forstr1.cpp -- using for with a string
#include<iostream>
#include<string>

int main(int argc, char const *argv[])
{
	using namespace std;
	cout << "Enter a word : ";
	string word;
	cin >> word;

	for (int i = word.size(); i >= 0 ; i--)
		cout << word[i];
	cout << "\n Bye. \n";
	
	return 0;
}