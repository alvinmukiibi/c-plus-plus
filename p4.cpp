#include <iostream>

using namespace std;

int main(){
	
	string cars[4]; // this is the first way, must specify number of elements in the array
	string bikes[3] = {"Honda", "TVS", "Bajaj"};
	cout << bikes[1] << endl;
	
	string people[2];
	
//	for(int i = 0; i < 2; i++){
//		getline(cin, people[i]);
//	}
//	
//	cout << people[2];

// Reference variables i.e.  is a "reference" to an existing variable, and it is created with the & operator

	string food = "Pizza";
	string &meal = food;
	
	cout << food << "\n";  // Outputs Pizza
	cout << meal << "\n";  // Outputs Pizza
	cout << &meal << endl; // Outputs the memory address where the variable is stored
	
	// Pointers i.e. variable that stores the memory address as its value
	
	string* ptr =  &meal;
	cout << ptr << endl;
	
	// dereferencing is using the pointer to get the value of the variable
	
	cout << *ptr;
	
	
	
	
}
