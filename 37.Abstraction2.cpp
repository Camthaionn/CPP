

#include <iostream>
using namespace std;

class Animal {  //abstract class  now all heritenced classes have to execute noise()
public:
    virtual void noise() = 0;  //abstraction

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

class Duck : public Animal {
public:
    void noise() {
        cout << "quack quack ";
    }
};

class Mause : public Animal {
public:
    void noise() {
        cout << "sadfas  ";
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
    Mause mause1;
    allNoises(&mause1);
}

