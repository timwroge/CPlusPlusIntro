//The purpose of this script is to generate an understanding of 
//GDB and how that applies to functions and call backs
#include <stdlib.h>
#include <iostream>
//this allows you to call
//std objects without std::
using namespace std;
void functionOne(){
	cout<<"Inside functionOne"<<endl;
}

int main(){
	int x=5;
	x+=5;
	x-=10;
	//these are just here to show how to enter a function and
	//see values of variables as they change 
	functionOne();
	return 0;
}
