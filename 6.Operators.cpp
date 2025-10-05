#include <iostream>

int main()
{
    int a = 10;
    int b = 20;

    //int res1 = --a;
    //int res2 = ++a;
    //int res3 = a++;  //This doesnt effect the a value because computer reads it from left to right.a value already assigned.But it affects the next value.So that res4 gives 11
    //int res4 = a--;
    //std::cout << a << '\n';
    //std::cout << res1<< '\n' ;  //-1 to a
    //std::cout << res2 << '\n';  //+1 to a
    //std::cout << res3 << '\n';
    //std::cout << res4;

  
    //a += b; = a = a + b;
    //a *=b; = a = a * b ;
    //x && y   --> give true if the both variables are true
    a += b;
    std::cout << a;




}   
