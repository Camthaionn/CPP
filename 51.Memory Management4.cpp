

#include <iostream>

class sharedPointer {
public:
    int d{};

    sharedPointer() {
        std::cout << "Created" << std::endl;
    }

    ~sharedPointer() {
        std::cout << "Deleted" << std::endl;
    }
};


int main()
{
    std::shared_ptr<sharedPointer> ptr = std::make_shared<sharedPointer>();

    std::shared_ptr<sharedPointer> ptr2 = ptr;

    //This functions counts how many pointers point the variable
    std::cout << ptr.use_count()<<std::endl;
}
