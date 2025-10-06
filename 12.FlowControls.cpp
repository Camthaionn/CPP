#include <iostream>



//
//int main()
//{
//    int a = 0;
//    int b = 0;
//
//    std::cin >> a;//Takes input from user
//    std::cin >> b;
//
//    std::cout << a + b;
//
//}



//int main()
//{
//    int a = 0;
//    int b = 0;
//    std::cout << "Frist number" << std::endl;
//    std::cin >> a;//Takes input from user
//    std::cout << "Second number" << std::endl;
//    std::cin >> b;
//
//    std::cout <<"Sonuc:"<< a + b;
//
//}



int main()
{
    int a = 0;
    int b = 0;
    char op = '+';

    std::cout << "Frist number" << std::endl;
    std::cin >> a;//Takes input from user

    std::cout << "Second number" << std::endl;
    std::cin >> b;

    std::cout << "Type your operator" << std::endl;
    std::cin >> op; 

    if (op == '+') {
        std::cout << "Sonuc:" << a + b;
    }
    else {
        std::cout << "Fail";
    }

}




