//twotemps.cpp -- using overload template functions
#include<iostream>

template<class Any>
void Swap(Any &a, Any &b);

template<class Any>
void Swap(Any *a, Any *b, int n);

void Show(int a[]);

const int Lim = 8;

int main(int argc, char const *argv[])
{
	using namespace std;
	int i = 10 , j = 20;
	cout << "i , j = " << i << " , " << j <<".\n";
	cout << "Using compiler-generated int swapper: \n";
	Swap(i,j);
	cout << "Now i , j = " << i << " , " << j <<".\n";

	int d1[Lim] = {0,7,0,4,1,7,7,6};
	int d2[Lim] = {0,6,2,0,1,9,6,9};
	cout << "original array: \n";
	Show(d1);
	Show(d2);
	Swap(d1,d2,Lim);
	cout << "Swapped arrays: \n";
	Show(d1);
	Show(d2);

	return 0;
}

template<class Any>
void Swap(Any &a, Any &b){
	Any temp;
	temp = a;
	a = b;
	b = temp; 
}

template<class Any>
void Swap(Any *a, Any *b, int n){
	Any temp;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}

void Show(int a[]){
	using namespace std;
	cout << a[0] << a[1] << "/";
	cout << a[2] << a[3] << "/";
	for (int i = 4; i < Lim; ++i)
	{
		/* code */
		cout << a[i];
	}
	cout << endl;
}