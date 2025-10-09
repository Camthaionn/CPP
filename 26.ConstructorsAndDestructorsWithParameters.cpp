#include <iostream>
using namespace std;

class Weapon {
protected:
    int price;
public:
    string name;
    int magazineCapacity;
    string color;

    Weapon() {
        cout << "Weapon has been spawned ";
    }

    ~Weapon() {
        cout << "Weapon has destroyed ";
    }
};

class Ak47 :public Weapon {   
public: 
    bool burstSingle;
    int slingLength;
    bool scope;
    
    Ak47() {
        cout << "Ak47 has been spawned ";
    }

    ~Ak47() {
        cout << "Ak47 has been destroyed ";
    }

    void shot() {
        price = 20;
        ///
    }
};


class Pistol :public Weapon {     
public:
    int WindingHandlePattern;

    void shot() {
        ///
    }

};

class M1 :public Weapon {     
public:
         
    bool burstSingle;
    int slingLength;
    int WindingHandlePosition;

    void shot() {
        ///
    }
};


int main()
{
    Ak47 ak47;
    ak47.name = "Ak47";   
    ak47.magazineCapacity = 24;    
    ak47.color = "black";
    cout << "Weapon name :" << ak47.name << endl;
    cout << "Mag capacity:" << ak47.magazineCapacity<<endl;
    cout << "color:" << ak47.color;
    return 0;
}
