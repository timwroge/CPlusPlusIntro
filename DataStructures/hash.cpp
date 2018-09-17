#include <stdlib.h>
#include <map>
#include <iostream>
#include <string>
int main(){
	//this will be a hash table (called a hash map)
	std::map<int, std::string> a;
	a[1]="Hello";
	a[2]="World";
	std::cout<<"a[1]="<<a[1]<<" a[2]="<<a[2]<<std::endl;
	return 0;
}
