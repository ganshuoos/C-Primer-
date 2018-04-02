//limits.cpp -- some integer limits

#include<iostream>
#include<climits>				//use limits.h for older system

int main(int argc, char const *argv[])
{
	using namespace std;
	int n_int = INT_MAX ; 		//initialize n_int to max int valve
	short n_short = SHRT_MAX ;  //symbols defined in limits.h file
	long n_long = LONG_MAX ;

	//sizeof operator yields size of type or of variable
	cout << "int is" << sizeof(int) << " bytes." << endl;
	cout << "short is" << sizeof(short) << " bytes." << endl;
	cout << "long is" << sizeof(long) << " bytes." << endl;

	cout << "Maximum values : " << endl;
	cout << "int : " << n_int << endl;
	cout << "short : " << n_short << endl;
	cout << "long : " << n_long << endl;

	cout << "Minimum int vlaue = " << INT_MIN << endl;
	cout << "Bits per bytes = " << CHAR_BIT << endl;
	return 0;
}
