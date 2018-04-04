//assgn_st.cpp -- assign structure

#include<iostream>
struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main(int argc, char const *argv[])
{
	using namespace std;
	inflatable bouquet =
	{
		"sunflowers",
		0.20,
		12.49
	};
	inflatable chioce;

	cout << "bouquet: " << bouquet.name << " for $ " << bouquet.price << endl;
	chioce = bouquet ;
	cout << "chioce: " << chioce.name << " for $ " << chioce.price << endl;

	return 0;
}