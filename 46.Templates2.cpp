


#include <iostream>
//////We can declare more than a variable as you can see
////template<typename X , typename Y>
////X max(X a, Y b) {
////    return (a > b) ? a : b;
////}
////
////int main()
////{
////    std::cout << max(1.1f, 5.5f);
////    std::cout << max<int>(10, 5);
////    std::cout << max <int, double>(34, 5324634125);
////
////}

template<typename T>
class Math {
public:
	T a{};
	T b{};

	int sum() {
		return a + b;
	}
};



int main() {
	//we have to define that which type will we work with
	Math<int> math;
	math.a = 10;
	math.b = 20;
	std::cout << math.sum();

	Math<float> math2;
	math.a = 67.4;
	math.b = 82.4;
	std::cout << math.sum();


}