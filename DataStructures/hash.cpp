#include <stdlib.h>
#include <map>
#include <iostream>
#include <string>
int main(){
	//this will be a hash table (called a hash map)
	std::map<char, unsigned int> charMap;

	charMap['a']++;
	std::cout<<charMap['a'];
	return 0;
}
