

#include <iostream >
using namespace std;

// const object
// const method
// const variable
// const parameter
// const pointer
// return const

class Weapon {
private:
	int value = 20;
public:

	int* get(const Weapon* ptr) {
		ptr->value = 50;
		return &value;
	}

	int* get(Weapon* const ptr) {
		Weapon s1;
		ptr = &s1;
		return &value;
	}


	int getAnother() {
		return value;
	}
};



int main() {
	Weapon weapon;
	weapon.get(&weapon);

	cout << weapon.getAnother();
}
