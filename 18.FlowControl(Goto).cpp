#include <iostream>

int main()//main function to execute codes
{
    int a = 0;//Variable
    int b = 0;//Variable
    char op = '0'; 

    while (op != 'q') {//Ends the loop if input from user is "q"
        std::cout << "First number" << std::endl;
        std::cin >> a;//Takes first input from user

        std::cout << "Second number" << std::endl;
        std::cin >> b;//Takes second input from user

        std::cout << "Choose your operator (+, -, *, /) or press q to quit ";
        std::cin >> op;//Takes the oprerator which user given

        if (op == 'q') {
            goto stop;     //This goes to stop to quit from while
        }

        switch (op) {//This swtich helps you to control the flow 

        case '+'://By this case you can sum your variable and end the program
            std::cout << "Result:" << a + b << std::endl;
            break;

        case '-'://By this case you can substract your variable and end the program
            std::cout << "Result:" << a - b << std::endl;
            break;

        case '*'://By this case you can multiply your variable and end the program
            std::cout << "Result:" << a * b << std::endl;
            break;

        case '/'://By this case you can divide your variable and end the program
            std::cout << "Result:" << a / b << std::endl;
            break;

        default://İf program can'not go inside of the cases it goes inside of default
            std::cout << "Unknown process!" << std::endl;
            break;
        }
    }
    stop:
    std::cout << "Program has ended" << std::endl;//To inform user that the program has ended
}
