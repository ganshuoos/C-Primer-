//getinfo.cpp -- input and output

#include<iostream>

int main(int argc, char const *argv[])
{
	using namespace std;

	int carrots;

	cout << "How many carrots do you have ?" << endl;
	cin >> carrots;										//C++ Input
	cout << "Here are two more.";
	carrots = carrots + 2 ;								//the next line concatenates output
	cout << "Now you have" << carrots << " carrots." << endl;
	return 0;
} 