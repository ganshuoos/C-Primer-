//cubes.cpp -- regular and reference arguments
#include<iostream>
double cube(double a);
double refcube(double &ra);

int main(int argc, char const *argv[])
{
	using namespace std;
	double x = 3.0;

	cout << cube(x);
	cout << " = cube of " << x << endl;
	cout << refcube(x) << " = cube of " << x << endl;
	cout << x;
	return 0;
}
double cube(double a){
	a*=a*a;
	return a;
}

double refcube(double &ra){
	ra*=ra*ra;
	return ra;
}

