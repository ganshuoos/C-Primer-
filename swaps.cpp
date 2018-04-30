//swaps.cpp -- swapping with reference and with pointers
#include<iostream>
void swapr(int & a, int & b);
void swapp(int *p, int *q);
void swapv(int a, int b);
int main(int argc, char const *argv[])
{
	using namespace std;
	int wallet1 = 300;
	int wallet2 = 350;

	cout << "wallet1 = $" << wallet1;
	cout << " , wallet2 = $" << wallet2 << endl;

	cout << "Using reference to swap: \n";
	swapr(wallet1,wallet2);
	cout << "wallet1 = $" << wallet1;
	cout << " , wallet2 = $" << wallet2 << endl;

	
	cout << "Using pointers to swap: \n";
	swapp(&wallet1,&wallet2);
	cout << "wallet1 = $" << wallet1;
	cout << " , wallet2 = $" << wallet2 << endl;

	cout << "Try to use passing by value: \n";
	swapv(wallet1,wallet2);
	cout << "wallet1 = $" << wallet1;
	cout << " , wallet2 = $" << wallet2 << endl;

	return 0;
}

void swapr(int & a, int & b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swapp(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void swapv(int a, int b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}
