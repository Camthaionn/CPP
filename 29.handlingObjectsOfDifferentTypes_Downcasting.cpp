

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
				//We have created object name under the weapon class
	Weapon weapon;
	weapon.name = "Desert Eagle";
	weapon.magazineCapacity = 14;
	weapon.color = "Gold";

	Ak47* ak47Ptr =(Ak47*) & weapon;	

	//Then we have sent that weapon to ak47 class an problem starts here
	//Because weapon class doesnt include the qualifications of ak47 class
	//You cant call those qualifications by using this cast method
	//When you try to use it gives wrong value

	cout << ak47Ptr->burstSingle;





	return 0;
}