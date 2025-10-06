

#include <iostream>

int main()//main function to execute codes
{
    int a = 0;//Variable
    int b = 0;//Variable
    

    std::cout << "Frist number" << std::endl;
    std::cin >> a;//Takes first input from user

    std::cout << "Second number" << std::endl;
    std::cin >> b;//Takes second input from user

    

    if (a < b) {//if statement to control condition
        std::cout << "firs one is smaller" ;
    }
    else if(a == b) {
        std::cout<<"Numbers are equal";
    }
    else {
        std::cout << "second one is bigger";
    }

}