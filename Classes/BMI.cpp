#include "BMI.h"
BMI::BMI(){
	newHeight=4;
	newWeight=5.0;
}
BMI::BMI(string name, int height,double weight){
	newName=name;
	newHeight=height;
	newWeight=weight;
}
BMI::~BMI(){

}
string BMI::getName() const{
	return newName;
}
int BMI::getHeight() const{
	return newHeight;
}
double BMI::getWeight() const{
	return newWeight;
}
