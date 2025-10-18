

#include <iostream>
using namespace std;





//This is an abstract class
class Animal {  //You can not create an object from abstarct class they  manage classes
    
public:
    int a;
    virtual void noise() = 0; 
};



//You can define variables in abstract classes
//Abstract classes include virtual methods.
//Abstract classes functions dont have function operating space
//They are similar to intrfaces



//This is an interface.Interface doesnt include variable
class Animal1 {
public:
   
    virtual void noise() = 0;
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

