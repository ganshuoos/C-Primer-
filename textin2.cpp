//textin2.cpp -- using cin.get(char)
#include<iostream>
int main(int argc, char const *argv[])
{
	using namespace std;
	char ch;
	int count = 0;

	cout <<"Enter character , Enter # to quit: \n";
	cin.get(ch);
	while(ch != '#'){
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << "characters read \n";
	return 0;
}
