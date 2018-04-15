//bigstep.cpp -- count as directed
#include<iostream>
int main(int argc, char const *argv[])
{
	using namespace std;
	cout << "Enter an integer : ";
	int by;
	cin >> by;
	cout << "Counting by " << by << "s: \n";
	for (int i = 0; i < 100; i = i + by)
	{
		/* code */
		cout << i << endl;
	}
	return 0;
}