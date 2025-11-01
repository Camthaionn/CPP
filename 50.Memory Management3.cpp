
#include <iostream>


class Summarize {
public:
    //pointers are pointing a null place to not cause a problem
    int* a = nullptr;
    int* b = nullptr;

    Summarize(int sumFirstNumber, int sumSecondNumber) {
        //We prepare stroge for new variables in heap
        a = new int;
        b = new int;

        //Parameters assigned to variables
        *a = sumFirstNumber;
        *b = sumSecondNumber;

    }

    ~Summarize() {
        //WE have to delete the variables to aviod memory leak
        delete a;
        delete b;
        std::cout << "Deleted";
    }
};



int main()
{
    //Creating new object and sending parameters
    Summarize* sum = new Summarize(10, 10);

    //object has deleted
    delete sum;
}
