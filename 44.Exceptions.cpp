
#include <iostream>
using namespace std;

double divide(int a, int b) {
    
    try {
        if (b < 1) {
            
            throw - 1;  
        }
        return a / b;
    }
    catch (int) {
        cout << "a number cannot divided by zero";
    }

}

int main()
{
    cout << divide(10, 5);
}
