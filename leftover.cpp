//leftover.cpp -- overloading the left() function
#include<iostream>
unsigned long left(unsigned long num, unsigned ct);
char* left(const char* str, int n = 1);

int main(int argc, char const *argv[])
{
	using namespace std;
	char* trip = "Hawaii!! ";
	unsigned long n = 12345678;
	int i;
	char* temp;

	for (int i = 0; i < 10; ++i)
	{
		/* code */
		cout << left(n,i) << endl;
		temp = left(trip,i);
		cout << temp << endl;
		delete [] temp;
	}
	return 0;
}

unsigned long left(unsigned long num, unsigned ct){
	unsigned long digits = 1;
	unsigned long n = num;

	if (ct == 0 || num == 0)
	{
		/* code */
		return 0;
	}
	while(n /= 10){
		digits++;
	}
	if (digits > ct)
	{
		/* code */
		ct = digits -ct;
		while(ct--){
			num /= 10;
			return num;
		}		
	}
	else
		return num;

}

char* left(const char* str, int n ){
	if (n < 0)
	{
		/* code */
		n = 0;
	}
	char* p = new char[n+1];
	int i;
	for (int i = 0; i < n && str[i]; ++i)
	 {
	 	/* code */
	 	p[i] = str[i];
	 } 
	 while( i <= n){
	 	p[i++] = '\0';
	 }
	 return p;
}