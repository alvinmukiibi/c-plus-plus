#include <iostream>

using namespace std;

class MyClass{
	
	public:
		MyClass(){
			cout << "This is a constructor, It gets to be called first" << endl;
		}
		int myNum;
		string myString;
		void myMethod(){
			cout << "This is a method inside a class" << endl;
		}
		int addNumbers(int a, int b); // when we want to define a method but outside the class, we first list its prototype in the class
}; // class definitions are terminated in c++

// this is then how we define such methods outside their class
int MyClass::addNumbers(int a, int b){
	return (a + b);
}

int main(){
	
	MyClass myObj; // this is how we instantiate a class in c++
	myObj.myNum = 23;
	myObj.myString = "Alvin";
	
	myObj.myMethod();
	cout << myObj.addNumbers(4,6) << endl;
	
}
