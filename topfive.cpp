//topfive.cpp -- handling an array of string objects
#include<iostream>
#include<string>
using namespace std;						//缺少报错 string does not name a type
const int SIZE = 5;
void display(const string sa[], int n);

int main(int argc, char const *argv[])
{
	using namespace std;
	string list[SIZE];
	cout << "Enter your " << SIZE << " favorite astronomical sights: \n";
	for (int i = 0; i < SIZE; ++i)
	{
		/* code */
		cout << i+1 << " : ";
		getline(cin,list[i]);
	}

	cout << "Your list : \n" ;
	display(list,SIZE);

	return 0;
}
void display(const string sa[], int n){
	using namespace std;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout << i + 1 << " : " << sa[i] << endl;
	}
}