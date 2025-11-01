

#include <iostream>

//macro varieble
#define Number 1

//macro function
#define Summarize(a,b) (a+b)


int main()
{
    //calling a macro function which have macro parameters
    std::cout << Summarize(Number, Number);
}
