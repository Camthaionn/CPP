#include <iostream>
using namespace std;

class Weapon {
public:
    string name;
    int magazineCapacity;
};

class Ak47 :public Weapon {     //İntheritance from Weapon class
public:
    /*string name;
    int magazineCapacity;*/     //no need these to assign here we can hanfle it by using inheritance
    bool burstSingle;
    int slingLength;
    bool scope;

    void shot() {
        ///
    }
};


class Pistol :public Weapon {     //İntheritance from Weapon class
public:
    /*string name;
    int magazineCapacity;*/    //no need these to assign here we can hanfle it by using inheritance
    int WindingHandlePattern;

    void shot() {
        ///
    }

};

class M1 :public Weapon {     //İntheritance from Weapon class
public:
    /*string name;
    int magazineCapacit;*/       //no need these to assign here we can hanfle it by using inheritance
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
    ak47.name = "Ak47";     //inheritance
    ak47.magazineCapacity = 24;        //inheritance
    cout << "Weapon name :" << ak47.name<<endl;
    cout <<"Mag capacity:" << ak47.magazineCapacity;

    return 0;
}
