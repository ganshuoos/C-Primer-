//arrayone.cpp

#include<iostream>

int main(int argc, char const *argv[])
{
	using namespace std;
	int yams[3];				//creates array with three elements
	yams[0] = 7 ;			//assign value to frist element
	yams[1] = 8 ;
	yams[2] = 6 ;

	int yamcosts[3] = {20, 30, 5};				//create initialize array
	//NOTE: If your C++ compiler or translator can't initialize this array
	//use static int yamcost[3] instead of int yamcost[3]
	
	cout << "Total yams = ";
	cout << yams[0] + yams[1] + yams[2] << endl;
	cout << "The package with " << yams[1] << " yams costs ";
	cout << yamcosts[1] << " cents per yam. \n";
	int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1] + yams[2] * yamcosts[2];
	cout << "The total yam expense is " << total << " cents. \n";

	cout << "\n Size of yam array = " << sizeof yams << " bytes. \n";
	cout << "size of one element = " << sizeof yams[0] << " bytes. \n"; 

	return 0;
}