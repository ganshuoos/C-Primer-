//carrot.cpp -- food processing program
//uses and displays a variable

#include<iostream>
int main(int argc, char const *argv[])
{
	using namespace std;

	int carrots;				//declare an integer variable

	carrots = 25;				//assign a value to the variable
	cout << "I have";
	cout << carrots;
	cout << " carrots.";		//display the value of the variable
	cout << endl;
	carrots = carrots - 1;		//modify the variable
	cout << "Crunch, Crunch. Now I have " << carrots << "carrots," << endl;

	return 0;
}