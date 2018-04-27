//strgback.cpp -- a function that returns a pointer to char
 #include<iostream>
char* builder(char c , int n);
int main(int argc, char const *argv[])
{
	using namespace std;
	int times;
	char ch;

	cout << "Enter a character: ";
	cin >> ch;
	cout << "Enter a integer: ";
	cin >> times;
	char* ps = builder(ch,times);
	cout << ps <<endl; 
	delete [] ps;
	ps = builder('+',20);
	cout << ps <<"-Done-" << ps << endl;
	delete [] ps;
	return 0;
}

char* builder(char c , int n){
	char* pstr = new char [n+1];
	pstr[0] = '\n';
	while(n-- > 0){
		pstr[n] = c;
	}
	return pstr;
}
