//strgfun.cpp -- functions with a string argument
#include<iostream>
int c_in_str(const char* str, char ch);
int main(int argc, char const *argv[])
{
	using namespace std;
	char mmm[15] = "minimum";
	char* wail = "ululate";

	int ms = c_in_str(mmm,'m');
	int us = c_in_str(wail,'u');
	cout << ms << " m character in " << mmm << endl;
	cout << us << " u character in " << wail << endl;

	return 0;
}

int c_in_str(const char* str, char ch){
	int count = 0;
	while(*str){
		if (*str == ch)
		{
			/* code */
			count++;
		}
		str++;
	}
	return count;
}

