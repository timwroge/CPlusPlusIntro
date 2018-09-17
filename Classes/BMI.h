//in here we have to make all the function declarations
//and have a general header file
#include <iostream>
#include <string>

using namespace std;

//This basically says that if this is not defined:
#ifndef BMI_H
#define BMI_H
class BMI{
	//here we will add all the information about private
	//and public variables
	public:
		BMI();
		BMI(string, int, double);
		//make destructor
		~BMI();
		string getName() const;//it is good practice to use const here becuase it wont mutate any of the member
		//variables
		int getHeight() const;
		double getWeight() const;
	private:
		string newName;
		int newHeight;
		double newWeight;
};
#endif
