//arrfun3.cpp
#include<iostream>
const int MAX = 5;

int fill_array(double ar[],int limit);
void show_array(const double ar[],int n);
void revalue(double r, double ar[], int n);


int main(int argc, char const *argv[])
{
	using namespace std;
	double proporties[MAX];

	int size = fill_array(proporties,MAX);
	show_array(proporties,size);
	cout << "\nEnter revaluetion factor: ";
	double factor;
	cin >> factor;
	revalue(factor,proporties,size);
	show_array(proporties,size);
	cout << "\nDone.\n";
	return 0;
}

int fill_array(double ar[],int limit){
	using namespace std;
	double temp;
	int i;
	for ( i = 0; i < limit; ++i)
	{
		/* code */
		cout << "Enter value # " << (i+1) << " : ";
		cin >> temp;
		if (!cin)
		{
			/* code */
			cin.clear();
			while(cin.get() != '\n'){
				continue;
			}
				cout << "bad input ; input process terminated.\n";
				break;
		}
		else if ( temp < 0 )
		{
			/* code */
			break;
		}
		ar[i] = temp;
	}
}

void show_array(const double ar[],int n){
	using namespace std;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout << "property #" << (i+1) << " : $";
		cout << ar[i] << endl;
	}
}
void revalue(double r, double ar[], int n){
	for (int i = 0; i < n; ++i)
	{
		/* code */
		ar[i]*=r;
	}
}
