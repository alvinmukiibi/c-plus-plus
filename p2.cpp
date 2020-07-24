#include <iostream>

using namespace std;

/*
	Working with inputs from the user
*/

int main(){
	
	int x;
	string name, story;
	
	cout << "Please type a number: "; // << is called the insertion operator
	cin >> x; // >> is called the extraction operator
	cout << "You have typed " << x << endl;
	
	cout << "Type your name: ";
	cin >> name;
	cout << "Your name is " << name << endl;
	
	// getting a full line of text from the user input
	
	cout << "What's your story?" << endl;
	getline(cin, story);
	cout << story;
	
	return 0;
}
