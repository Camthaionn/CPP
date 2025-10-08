
#include <iostream>

//
//class Maths {
//public:
//    int a;
//    int b;
//    int result = 0;
//
//    void sum() {
//        this->result = this->a + this->b;
//    }
//
//    void print() {
//        std::cout << this->result;
//    }
//};
//
//
//int main()
//{
//    Maths mat;
//    mat.a = 10;
//    mat.b = 20;
//    mat.sum();
//    mat.print();
//
//}




//
//// Its an area calculator made by me 
//
//class AreaCal {  // This is class
//public:			//tihs lets you to use quantities of class in other functions
//	int firstSide;  //variables
//	int	secondSide;
//	int area;
//
//	void multip() {   // our calculator function
//		 area = firstSide * secondSide;
//	}
//	void print() {		//our printer function
//		std::cout << "Area = " << area;
//	}
//};
//
//int main() {
//	AreaCal area1; // To include class into main function and to create object.
//	area1.firstSide = 10;	//values
//	area1.secondSide = 20;
//
//	area1.multip();//calling the functions
//	area1.print();
//
//	return 0 ;
//}


#include <iostream>
using namespace std;
class AreaCalculator {
public:
	int height;
	int width;
	int area;

	void input() {
		cout << "Type the height" << endl;
		cin >> height;

		cout << "Type the width" << endl;
		cin >> width;
	}

	void calculate() {
		area = height * width;
		cout << "Result=" << area << endl;

	}

};

int main() {
	AreaCalculator area1;
	area1.input();
	area1.calculate();

}