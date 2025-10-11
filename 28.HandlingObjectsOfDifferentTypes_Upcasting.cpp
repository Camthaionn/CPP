

#include <iostream>
using namespace std;

class Weapon {
public:
	string name;
	int magazineCapacity;
	string color;

};

class Ak47 : public Weapon {
public:
	bool burstSingle;
	int slingLength;
	bool scope;

	void shoot() {

	}
};

class Pistol : public Weapon {
public:
	int chargingHandlePattern;

	void shoot() {

	}
};

class M1 :public Weapon {
public:
	bool burstSingle;
	int slingLength;
	int chragingHandlePattern;

	void shoot() {

	}
};

int main() {

	Ak47 ak47;
	ak47.name = "test"; 

	Weapon* weapPtr = &ak47; //Giving the ak47 object like a weapon not ak47

	weapPtr->name = "notest";  // So we can change the name
	cout << ak47.name;
				//we can change the qualifications of the objeect as it is a weapon not Ak47 --up cast

	return 0;
}
