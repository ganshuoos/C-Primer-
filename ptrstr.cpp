//ptrstr.cpp -- using pointer to string
#include<iostream>
#include<cstring>
int main(int argc, char const *argv[])
{
	using namespace std;
	char animal[20] = "bear" ;
	const char* bird = "wren" ;
	char* ps ;

	cout << animal << " and ";
	cout << bird << endl;
	//cout << ps << endl;

	cout << "please enter a kind of animal : " ;
	cin >> animal ;

	ps = animal ;
	cout << ps << "s! \n";
	cout << "Before using strcpy() : \n";
	cout << animal << " at " << (int*)animal << endl;
	cout << ps << " at " << (int*)ps << endl;

	ps = new char [strlen(animal)+1];
	strcpy (ps , animal);
	cout << "After using strcpy() : \n";
	cout << animal << " at " << (int*)animal << endl;
	cout << ps << " at " << (int*)ps << endl;
	delete [] ps;
	return 0;
}