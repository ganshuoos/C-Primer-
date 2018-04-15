//forstr2.cpp -- reversing an array
#include<iostream>
#include<cstring>

int main(int argc, char const *argv[])
{
	using namespace std;
	cout << "Enter a word : ";
	string word;
	cin >> word;
	char temp;
	int i,j;

	for (j = 0 , i = word.size()-1 ; j < i ; --i,++j)
	{
		/* code */
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	cout << word << "\n Done \n";
	return 0;
}