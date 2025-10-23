


#include <iostream>

//We use template method so we dont have to create another functions for different variables
//because template does it for us
template<typename T>

T max(T a, T b) {
    return (a > b) ? a : b;
}

int main()
{

    //as you can see different type of variables are sent and
    //no problem benefit of template method
    std::cout << max(23, 430)<<std::endl;
    std::cout << max(33.4, 35.4)<<std::endl;
    
}

