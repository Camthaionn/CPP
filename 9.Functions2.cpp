#include <iostream>


int sum(int var1, int var2) {
	return var1 + var2;
}

int sum(double var1, double var2) {
	return var1 + var2;
}

//Compiler can undesrtand which function it will be used byy the parameters ggiven. Name of function can same
int main()
{
	int a = 5;
	int b = 10;
	double c = 10.5;
	double d = 20.5;

	std::cout << sum(a, b) << '\n';
	std::cout << sum(c, d);

}

