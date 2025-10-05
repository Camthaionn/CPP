#include <iostream>

//Yhis is a basic function named Hello when you call it in main fucntion it gives hello world message
void hello() {
std:: cout << "Hello world";
}

//This is a function called helloV2 in this function it gives the char that you gave given it before.
void helloV2(char msg) {
std::cout << msg;
}

//This is helloV3 an this can take 2 char parameters.
void helloV3(char msg,char msg2) {
	std::cout << msg << msg2;
}

//-------------------------------


//By using this function you can summarize two different variables
int sum(int var1,int var2) {
	return var1 + var2;
}


int main()
{
	std::cout <<sum(24,6);
}
//You ca call a function inside a function but you cant program 2 functions in a function