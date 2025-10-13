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

void Show(Weapon* WeaponPtr) {
	cout << WeaponPtr->name << endl;
}

int main() {

	Ak47 ak47;
	ak47.name = "Ak47";

	Show(&ak47);


	Pistol pistol;
	pistol.name = "Pistol";

	Show(&pistol);

	M1 m1;
	m1.name = "M1";

	Show(&m1);



	return 0;
}