
#include <iostream >

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
	const int* get() {
		
		return &value;
	}
};




int main() {
	Weapon weapon;
	*(weapon.get()) = 100;
}// we cant change the value because its const