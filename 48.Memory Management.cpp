


#include <iostream>

class Weapon {
public:
    //Constructor method
    Weapon() {
        std::cout << "Created" << std::endl;
    }
    //Deconstructor method
    ~Weapon() {
        std::cout << "Deleted" << std::endl;
    }
};

int main()
{
    //object created
    Weapon* weapon;

    //Heap memory
    weapon = new Weapon;
    
    //deleted 
    delete weapon;

    std::cout << "Program has ended\n";
}
