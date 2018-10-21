#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
using namespace std::chrono;

void doSomeWork(){
	std::cout<< "I am doing a ton of work\n";
}
void doSomeOtherWork(){
	std::cout<< "I am doing a ton of other work\n";
}
int main(){
	std::thread aThread(doSomeWork);
	std::thread aSecondThread(doSomeOtherWork);
	aThread.join();//waits for the thread to finish
	aSecondThread.join();
	return 0;
}
