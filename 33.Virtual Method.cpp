


#include <iostream>
using namespace std;


class Weapon {
public:
	string name;
	int magazineCapacity;
	string color;

	virtual void shoot() = 0; //Virtual method so we can call gun noises

};

class Ak47 : public Weapon {
public:
	bool burstSingle;
	int slingLength;
	bool scope;

	void shoot() {
		cout << "bom bom";
	};
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
	int slingLength;
	int windingHandlePosition;

	void shoot() {
		cout << "bum bum";
	};
};

void shotShoot(Weapon* weaponPtr) {
	weaponPtr->shoot();
}


int main() {

	Ak47 ak47;
	Pistol pistol;
	M1 m1;

	shotShoot(&ak47);
	shotShoot(&pistol);
	shotShoot(&m1);

	return 0;
};