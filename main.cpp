#include <iostream>

using namespace std;

int main(){
	cout << "This is Alvin Mukiibi Signing into C plus plus" << endl;
	// endl is a manipulator meaning end line and insert a new line
	
	string myName = "Alvin Mukiibi";
	int myAge = 23;
	char firstXter = 'A'; // note the single quotes
	bool status = false; // these boolean values are lower case
	double amount = 23000.00;
	float value = 3.34;
	
	// constants
	const int size = 35;
	
	cout << myName << endl;
	cout << "I am " << myAge << " years old";
	
//	cout << add_numbers(2,3);
	
	return 0;
}

int add_numbers(int a, int b){
	
	return a + b;
	
}
