//strtref.cpp -- using structure references
#include<iostream> 
using namespace std;

struct sysop{
	char name[26];
	char quote[24];
	int used;
};

const sysop & use (sysop & sysopref);

int main(int argc, char const *argv[])
{
	/* code */
	sysop looper{
		"Rick\"Fortran\"Looper",
		"I'm a goto kind of guy",
		0
	};

    use(looper);
    cout << "Looper: " << looper.used <<" use(s)\n";
    sysop copycat;
    copycat = use(looper);
    cout << "Looper: " << looper.used <<" use(s)\n";
    cout << "Copycat: " << copycat.used <<" use(s)\n";
    cout << "Use(looper): " << use(looper).used << " use(s)\n"; 
	return 0;
} 

const sysop & use (sysop & sysopref){
	cout << sysopref.name << " says:\n";
	cout << sysopref.quote << endl;
	sysopref.used++;
	return sysopref;
}
