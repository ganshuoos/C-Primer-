//arrfun2.cpp -- functions with an array argument
#include<iostream>
const int ArSize = 8;
int sum_arr(const int * begin,const int* end);

int main(int argc, char const *argv[])
{
	int cookies[ArSize] = {1,2,4,8,16,32,64,128};
	int sum = sum_arr(cookies,cookies+ArSize);
	std::cout << "Total cookies eaten: " << sum << std::endl;
	sum = sum_arr(cookies,cookies+3);
	std::cout << "Frist three eaters ate " << sum <<" cookies.\n";
	sum = sum_arr(cookies+4,cookies+8);
	std::cout << "Last four eaters ate " << sum <<" cookies.\n";
	return 0;
}

int sum_arr(const int * begin,const int* end){
	const int* pt;
	int total = 0;
	for (pt = begin; pt != end; ++pt)
	{
		/* code */
		total = total + *pt;
	}
	return total;
}
