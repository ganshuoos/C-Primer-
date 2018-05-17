//stocks.cpp -- the whole program
#include<iostream>
#include<cstring>

class stocks
{
private:
	char company[30];
	int shares;
	double share_val;
	double total_val;
	void set_tot(){
		total_val = shares * share_val;
	}
public:
	void acquire(const char* co, int n, double pr);
	void buy(int num, double price);
	void sell(int num, double price);
	void update(double price);
	void show();
};

void stocks::acquire(const char* co, int n, double pr){
	std::strncpy(company,co,29);
	company[29] = '\0';
	if (n < 0)
	{
		/* code */
		std::cerr << "Number of shares can't be negative." << company << " shares set to 0.\n";
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tot();
}

void stocks::buy(int num, double price){
	if (num < 0)
	{
		/* code */
		std::cerr << "Number of shares purchased can't be negative." << company << " Transaction is aborted.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void stocks::sell(int num, double price){
	using std::cerr;
	if (num < 0)
	{
		/* code */
		std::cerr << "Number of shares purchased can't be negative." << company << " Transaction is aborted.\n";
	}
	else if (num > shares)
	{
		/* code */
		std::cerr << "You can't sell more than you have ! " << " Transaction is aborted.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void stocks::update(double price){
	share_val = price;
	set_tot();
}

void stocks::show(){
	std::cout << "Company : " << company << std::endl; 
	std::cout << "Shares : " << shares << std::endl; 
	std::cout << "Share price : " << share_val << std::endl; 
	std::cout << "Total worth : " << total_val << std::endl; 
}

int main(int argc, char const *argv[])
{
	using std::cout;
	using std::ios_base;
	stocks stock1;
	stock1.acquire("NanoSmart" , 20 , 12.50);
	cout.setf(ios_base::fixed);
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	stock1.show();
	stock1.buy(15,18.25);
	stock1.show();
	stock1.sell(400,20.00);
	stock1.show();
	
	return 0;
}