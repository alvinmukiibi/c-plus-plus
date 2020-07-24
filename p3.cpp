#include <iostream>

using namespace std;

int main(){
	
	int x = 5;
	int y = 6;
	
	cout << (x < y) << endl; // the braces are mandatory and comparison operators return 1 or 0 equivalent to true and false respectively
	
	string fname = "Alvin";
	string lname = "Mukiibi";
	
	string name = fname + " " + lname; // this is concatenation in c++
	
	cout << name << endl;
	
	// length of a string
	
	cout << name.length() << endl;
	
	cout << name[2] << endl; // name is treated like an array and indexing starts at 0
	fname[1] = 'J';
	
	cout << fname;
	
	
	
	return 0;
}
