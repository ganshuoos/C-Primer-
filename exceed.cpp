//exceed.cpp -- exceeding some integer limits 

#include<iostream>
#include<climits>			//defines INT_MAX as largest int value
#define ZERO 0 				//makes ZERO symbol for 0 value

int main(int argc, char const *argv[])
{
	using namespace std;
	short sam = SHRT_MAX ; 	//initialize a variable to max value
	unsigned short sue = sam ;//okay if variable sam already defined

	cout << "sam has " << sam << " dollars and sue has " << sue ;
	cout << "dollars deposited." << endl;
	cout << " Add $1 from each account. " << endl << " Now ";
	sam = sam + 1 ;
	sue = sue + 1 ;
	cout << "sam has " << sam << " dollars and sue has " << sue ;
	cout << " dollars deposited. \n Poor sam!"<<endl;
	sam = ZERO ; 
	sue = ZERO ;
	cout << "sam has " << sam << " dollars and sue has " << sue ;
	cout << "dollars deposited." << endl;
	cout << " Take $1 from each account. " << endl << " Now ";
	sam = sam -1 ;
	sue = sue -1 ;
	cout << "sam has " << sam << " dollars and sue has " << sue ;
	cout << " dollars deposited. \n Lucky sue!"<<endl;
 
	return 0;
}