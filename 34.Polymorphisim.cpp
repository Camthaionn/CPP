


#include <iostream>
using namespace std;


class Weapon {
public:
    string name;
    int magazineCapacity;
    string color;

    virtual void shoot() {
        cout << "pis pis";
    }
};

class Ak47 : public Weapon {
public:
    bool burstSingle;
    int slingLength;
    bool scope;

    void shoot() {
        cout << "bom bom";
    }
};

class Pistol : public Weapon {
public:
    int windingHandlePattern;

    void shoot() {
        cout << "bam bam";

    }
};

class M1 : public Weapon {
public:
    bool burstSingle;
    int slingLenght;
    int windingHandlePosition;

    void shoot() {
        cout << "bum bum";
    }

};

void shootShot(Weapon* weaponPtr) {
    weaponPtr->shoot();         //we can call the all gun noises by this function
}

int main() {
    Ak47 ak47;
    Pistol pistol;
    M1 m1;

    shootShot(&ak47);
    shootShot(&pistol);
    shootShot(&m1);
}










