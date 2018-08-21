#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

class ExampleClass{
	//this will denote the functions and 
	//variables as public
	public:
		ExampleClass(){
			//this is the default constructor
			//this will run if no arguments are passed
			cout<<"Inside default constructor"<<endl;
			
		}
		
		int propertyInt=5;
		string propertyString="This is a string";
		void doSomething(){
			cout<<"You told me to do something"<<endl;
		}
		void callAnotherFunction(){
			aPrivateFunction();
		}
	private:
		int privateInt=7;
		void aPrivateFunction(){
			cout<<"This is only allowed to be called within the class"<<endl;
		}


};

