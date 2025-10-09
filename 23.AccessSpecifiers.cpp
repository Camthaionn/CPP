#include <iostream>
#include <string>

//class Payment {
//private:
//    std::string hasCode = "123456789";  //We dont want this yo be changed so its under de private.
//
//public:
//    std::string moneyType = "usd";
//    std::string cost = "0.0";
//   
//
//    void pay() {
//        std::cout << "We are sending your data to Bank. Money type: " + this->moneyType +
//            " Cost:" + this->cost + " Code:" + this->hasCode;
//    }
//};


class Payment {
protected:
    std::string hasCode = "123456789";  //We dont want this yo be changed so its under de private.

public:
    std::string moneyType = "usd";
    std::string cost = "0.0";


    void pay() {
        std::cout << "We are sending your data to Bank. Money type: " + this->moneyType +
            " Cost:" + this->cost + " Code:" + this->hasCode;
    }
};

//Because that the payment class is protected we can use it in this class.Its inheritance.
class Test :public Payment {
public:
    void hello() {
        Test::hasCode = "asdasd";
    }
};

int main() {
    Payment payment;
    payment.moneyType = "usd";
    payment.cost = "50.6";
    payment.pay();
    return 0;
}
