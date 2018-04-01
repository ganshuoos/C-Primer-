// sqrt.cpp -- using the sqrt() function

#include<iostream>
#include<cmath>


int main(int argc, char const *argv[])
{
	using namespace std;

	double area;
	cout << "Enter the floor area , in square feet , of your home: ";
	cin >> area;
	double side;
	side = sqrt(area);
	cout << "That's the equivalent of a square 39.1918 " << "feet to the side";
	cout << "How fascinating!" << endl;
	return 0;
}