//twofile2.cpp -- variables with internal and external linkage
#include<iostream>

extern int tom;
static int dick = 10;
int harry = 200;

void remote_access(){
	using namespace std;
	cout << &tom << " = &tom , " << &dick << " = &dick , " << &harry << " = &harry \n";
}