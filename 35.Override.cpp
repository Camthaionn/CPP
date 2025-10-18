

#include <iostream>
using  namespace std;



class Weapon {
public:
    string name;
    int magazineCapacity;
    string color;

    virtual void shoot() {
        cout << "pis pis";
    }

};

class Ak47 :public Weapon {
public:
    bool burstSingle;
    int slingLength;
    bool scope;

     void shoot() {     //This is override because this method is presents in the upper class
         Weapon::shoot(); // This executes both methods from upper clas and down class
        cout << "bom bom";

    }
};


class Pistol :public Weapon {
public:
    int windingHandlePattern;

    void shoot() {        //This is override because this method is presents in the upper class
        cout << "bam bam";
    }
};


class M1 : public Weapon {
public:
    bool burstSingle;
    int slingLength;
    int windingHandlePosition;

    void shoot() {  //This is override because this method is presents in the upper class
        cout << "bum bum";
    }
};

void shootShot(Weapon* weaponPtr) {
    weaponPtr->shoot();
}

int main()
{
    Ak47 ak47;
    
    shootShot(&ak47);

    return 0;
  
}
