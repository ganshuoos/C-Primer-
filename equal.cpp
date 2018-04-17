//equal.cpp -- equality vs assignment
#include<iostream>
int main(int argc, char const *argv[])
{
	/* code */
	using namespace std;
	int quziscores[10] = {20,20,20,20,20,19,20,18,20,20};

	cout << "Doing it right : \n";
	int i;
	for (int i = 0; quziscores[i] == 20 ; ++i)
	{
		/* code */
		cout << "quiz " << i << " is a 20 \n";
	}
	
	cout << "Doing it dangerously wrong : \n";
	for (int i = 0; quziscores[i] = 20 ; ++i)
	{
		/* code */
		cout << "quiz " << i << " is a 20 \n";
		
	}
	return 0;
}