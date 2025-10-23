


#include <iostream>

//
//template<typename T>
//class Math {
//public:
//	T a{};
//	T b{};
//
//	int sum() {
//		return a + b;
//	}
//};
//
//
//class Weapon {};
//class Bullet {};
//
//
//template<class T>
//T*  createObject() {
//	T nesne;
//	return &nesne;
//
//}
//
//
//
//int main() {
//	//We have sent class
//	std::cout << createObject<Weapon>();
//
//}


template<typename T>
class Math {
public:
	T a{};
	T b{};

	int sum() {
		return a + b;
	}
};


class Weapon {};
class Bullet {};


template<typename T>
T* createObject(T nesne) {
	return &nesne;

}



int main() {

	//now we have sent an object
	Weapon weapon;
	std::cout << createObject<Weapon>(weapon);

}