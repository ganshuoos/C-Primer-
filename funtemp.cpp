//funtemp.cpp -- using a function template
#include<iostream>

template <class Any>
void Swap(Any &a, Any &b);

int main(int argc, char const *argv[])
{
	using namespace std;
	int i = 10;
	int j = 20;
	cout << "i, j = " << i << ", " << j << ".\n";
	cout << "Using compiler-generated int swapper: \n";
	Swap(i,j);
	cout << "Now i, j = " << i << ", " << j << ".\n";
	return 0;
}
template <class Any>
void Swap(Any &a, Any &b){
	Any temp;
	temp = a;
	a = b;
	b = temp;
}
