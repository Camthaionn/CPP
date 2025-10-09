#include <iostream>
using namespace std;
class Payment {
public:
	float cost;

	string moneyType;
	string hashCode = "2312412";

	Payment(bool f,string a) { //constructer method when we use bool and string parameter stihs works
		cost = 3.4;
		moneyType = "usd";
		cout <<a;
	}

	Payment(bool f) { //constructer method when we use just bool parameter this works
		cost = 3.4;
		moneyType = "usd";
		cout << f;
	}


	Payment() { //we have to assign a constructor method because we have another one up there so that computer doesn't make it on its own
		
	}

	~Payment() {//Deconstructor method. You cant give parameters to deconstructor method.It starts when object gone.
		cout << " Done";
	}


	void pay() {
		//payTo (hash code,cost,moneyType);
		cout << " paymend has taken";
	}
};

int main() {

	
		Payment pay;
		pay.moneyType = "usd";
		//pay hashCode = '12412412';
		pay.pay();
	
	
	return 0;
}