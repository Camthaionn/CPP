


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

	void shoot(string name) {
		this->name = name;		//This method lets the compiler know its in this class
	};
};

class Pistol : public Weapon {
public:
	int windingHandlePattern;

	void shoot() {

	}

};


class M1 : public Weapon {
public:
	bool burstSingle;
	int slingLength;
	int windingHandlePosition;

	void shoot() {
	};
};


int main() {

	Ak47 ak47;
	ak47.shoot("Semi automatic");



	return 0;
};