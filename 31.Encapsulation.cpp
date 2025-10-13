
//Encapsulation exapmle
#include <iostream> 
using namespace std;

class Payment {
private:
	float cost;
public:
	string moneyType;

	void setCost(float c) {
		if (c > 0) {
			cost = c;
		}
		else {
			cost = 0.1;
		}
	}

	void pay() {
		cout<< cost << ":Payment has been taken";
	}
};



int main() {
	Payment pay;
	pay.setCost(-34.4);
	pay.moneyType = "usd";
	pay.pay();


	return 0;
};