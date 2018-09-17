#include <iostream> //input output
#include <vector>
#include <string>
#include <fstream>
using namespace std;
int main(){
	cout<<"Hello World"<<endl;

	//making variables
	const double PI=3.14;
	char myGrade='A';
	bool isHappy=true;
	float favNum=3.1415;;
	double numberOther=1.6;

	cout<< "Fav number: "<<favNum<<endl;
	//to cast
	cout<<"4/5 = "<<(float) 4/5<<endl;
	//using if statements
	bool skyIsBlue=true;
	if(skyIsBlue){
		cout<<"The sky is blue"<<endl;
	}//else if(not(skyIsBlue)){

	//	cout<<"The sky is not blue"<<endl;
	//}
	//else ifs just follow the if statement
	//this is an example of a switch statement
	
	int greeting=1;
	switch(greeting){
		case 1: 
			cout<<"bonjour"<<endl;
			break;
		case 2:
			cout<<"hallo"<<endl;
			break;
		default:
			cout<<"hello"<<endl;
	}
	//variable =(condition)? true:false
	int largestNum ((5>2) ? 5:2);
	//the value should be 5

	return 0;
}
