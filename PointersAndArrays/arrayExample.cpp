#include <stdlib.h>
#include <string.h>

using namespace std;

int main(){
	//an array is a contintiguous sequence of memory addresses 
	int exampleArray[5];//This is a integer array of length 5
	//example of indexing
	for (int i=0;i<5;i++){
		exampleArray[i]=0;	
	}
	//or equivalently
	int secondExampleArray[5]={};
	//or 
	int thirdExampleArray[5]= {0,0,0,0,0};
	return 0;
}
