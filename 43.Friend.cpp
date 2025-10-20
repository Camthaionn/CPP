

#include <iostream>
using namespace std;

//class Payment {
//private:
//	float cost = 0;
//public:
//	string moneyType;
//
//	void setCost(float t) {
//		if (t > 0) {
//			cost = t;
//		}
//		else {
//			cost = 0.1;
//		}
//	}
//
//	void pay() {
//		cout << cost << " :Payment has been taken";
//	}
//
//	// by using this friend method we can reach some variables that we cant reach normally.
//	friend void change(Payment* paymentPtr);
//};
//
//
//void change(Payment* paymentPtr) {
//	paymentPtr->cost = -10;
//}
//
//int main() {
//	Payment payment;
//	change(&payment);
//	payment.moneyType = "usd";
//	payment.pay();
//
//}

class Payment {
private:
	float cost = 0;
public:
	string moneyType;

	void setCost(float t) {
		if (t > 0) {
			cost = t;
		}
		else {
			cost = 0.1;
		}
	}

	void pay() {
		cout << cost << " :Payment has been taken";
	}

	// Friend class
	friend class Test;
};


//Friend class
class Test {
public:
	void change(Payment* payment) {
		payment->cost = -10;
	}
};

int main() {
	Payment payment;

	Test test;
	test.change(&payment);
	
	payment.moneyType = "usd";
	payment.pay();

}
// we can reach private variables by using firend methods.