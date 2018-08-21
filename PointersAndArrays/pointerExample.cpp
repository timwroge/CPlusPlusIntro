#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
	//example integer
	int a=5;
	cout<<"The value of a: "<<a<<endl;//this will print 5
	cout<<"The memory register for a: "<<&a<<endl;//this will print the point in memory of the int a
	//at a basic level, pointers just point to an address in memory of a type
	//here, I will declare the pointer to an int type;
	int *x;
	x=&a;// this will assign the pointer x to the register in memory of a
	//to dereference this pointer from memory, you just use the *
	cout<<"The value of x*: "<<*x<<endl;
	return 0;

}
