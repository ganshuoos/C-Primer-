//string.cpp -- storing string in an array

#include<iostream>
#include<cstring>				//for the strlen()function

int main(int argc, char const *argv[])
{
	using namespace std;
	const int Size = 15 ;
	char name1[Size];
	char name2[Size] = "C++owboy";
	//NOTE:some implementations may require the static keyword 
	//to initialize the array name2
	
	cout << "Howdy! I'm " <<  name2 ;
	cout << "! what's your name ? \n";
	cin >> name1;
	cout << "Well , " << name1 << " , your name has ";
	cout << strlen(name1) << " letters and is stored \n";
	cout << "in an array of " << sizeof(name1) << " bytes. \n";
	cout << "Your initial is " << name1[0] << " . \n";
	name2[3] = '\0';
	cout << "Here are the frist 3 character of my name " << name2 << " . \n";

	return 0;
}