#include <string>
#include <iostream>
#include "BMI.h"
using namespace std;
int main (){
	//get some random height and weight information
	int height = 5;
	double weight=6.0;
	string name="a great name";
	BMI Person(name, height, weight);
	//example of using accessors
	cout<< "Person with name: "<<Person.getName()<<" height: "<< Person.getHeight()<<" Weight: "<< Person.getWeight()<<endl;
	return 0;
}
