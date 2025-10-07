
#include <iostream>
#include <iterator>

int main()
{
    int scores[5]{7,8,9};   //Empty array 
    int scoresV2[5]{20,50,60,80,100};  //not empyty array

    std::cout << scores<< '\n'; // This code gives the adress of the first data int he array called scores -->000000273ECFF9D8
    std::cout << *scores << '\n'; // This code gives the first data in array called scores --> 0
    
    int* ptr = scores;
    std::cout << scores << '\n'; // This give the same adress from scores
    

    int* ptr1 = scores + 1; //The adres of 8 value from scores
    std::cout << *ptr1; //This code gives 8 value from scores -->8



}

