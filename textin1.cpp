//textin1.cpp -- reading chars with a while loop
#include<iostream>
int main(int argc, char const *argv[])
{
	using namespace std;
	char ch;
	int count = 0;

	cout << "Enter characters , Enter # to quit : \n";
	cin >> ch ;
	while(ch != '#'){
		cout << ch ;
		++count;
		cin >> ch;
	}
	cout << endl << count << "characters read " << endl; 
	return 0;
}