

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void noise() { //If we dont make this virtual compiler doesnt make the noise that we want
        cout << "noise";    //IT searches for a animal not a specific one
    }

};

class Dog : public Animal {
public:
    void noise() {
        cout << " rough rough ";
    }
};

class Cat : public Animal {
public:
    void noise() {
        cout << "meow meow ";
    }
};

class Duck : public Animal{
public:
    void noise() {
        cout << "quack quack ";
    }
};

void allNoises(Animal* animalPtr) {
    animalPtr->noise();

}



int main()
{
    Dog dog1;
    Cat cat1;
    Duck duck1;

    allNoises(&dog1);//How to call noise functions
}

