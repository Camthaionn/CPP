


#include <iostream>
using namespace std;

////Statick Memory 
//void test() {
//	static int a = 0;
//	a++;
//	cout << a << endl;
//
//}

//class Book {
//public:
//	static int number;
//
//	Book() {
//		number++;
//	}
//};
//
//int Book::number = 0;
//
//
//int main() {
//	Book book1;
//	Book book2;
//	Book book3;
//	Book book4;
//	
//	cout << Book::number;
//}

class Book {
public:
	static int number;

	Book() {
		number++;
	}

	static int get() {
		return number;
	}
};

int Book::number = 0;

void test() {
	static Book book;
	Book book2;
	Book book3;
}

int main() {

	test();

	cout << Book::get();
}