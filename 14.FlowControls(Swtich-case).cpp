
#include <iostream>

int main()//main function to execute codes
{
    int a = 0;//Variable
    int b = 0;//Variable
    char op = 'a';
        

    std::cout << "Frist number" << std::endl;
    std::cin >> a;//Takes first input from user

    std::cout << "Second number" << std::endl;
    std::cin >> b;//Takes second input from user

    std::cout << "Choose your operator ";
    std::cin >> op;//Takes the oprerator which user given

    switch (op) {//This swtich helps you to control the flow 
    case '+'://By this case you can sum your variable and end the program
        std::cout << "Result:" << a + b;
        break;
    case '-'://By this case you can substract your variable and end the program
        std::cout << "Result:" << a - b;
        break;
    case '*'://By this case you can multiply your variable and end the program
        std::cout << "Result:" << a * b;
        break;
    case '/'://By this case you can divide your variable and end the program
        std::cout << "Result:" << a / b;
        break;
    default://İf program can'not go inside of the cases it goes inside of default
        std::cout << "Unknown process";
        break;
    }

    std::cout << "  -Program is done";
   
}