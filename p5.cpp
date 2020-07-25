#include <iostream>

using namespace std;

void myFunc(); // this is called a function prototype

int main(){
	
	/**
	There is no function floating in c++, so you have to declare the function before u call it
	so you can choose to use function prototyping which is putting the declaration first, the definition later
	*/
	myFunc();
	
	return 0;
}

void myFunc(){
	cout << "I just got executed";
}


