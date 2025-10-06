
#include <string>
#include <iostream>


void print(std::string text) {
    std::cout << text;
}

//For the case that user haven't given any messages
void printV2(std::string text="default message") {
    std::cout << text;
}

//Multiple parameter function
void printV3(std::string text = "default message",int a = 20,bool as = false) {
    std::cout << text << a << as;
}

int main()
{
    printV3("Hi",2,true);
}

