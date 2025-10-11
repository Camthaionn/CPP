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

	//Ak47 ak47;			//ak47 object has been created under the ak47 class
	//Ak47* ak47Ptr = &ak47;			//we can relate the adress with a pointer the adress of ak47 object

	//int number1 = 10;

	//int& deneme = number1;			//This references the number1 ande it icludes the value of 10.

	//cout << number1 << endl;
	//cout << deneme << endl;

	//			//We can point the adress with mutltiple names this called reference

	//deneme = 5;			// If we change it here it changes directly the value and makes it 5 as you can see
	//number1 = 50;			// If we change it here it changes directly the value and makes it 50 as you can see		
	

	Ak47 ak47;

	Ak47& ak47Ref = ak47;

	ak47Ref.name = "test";  //ak47 and ak47Ref references same data so it changes here an makes it "test"

	cout << ak47.name;

	return 0;
}