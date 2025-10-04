
#include <iostream>
#include <iomanip>
int main()
{
/*/	char d[] = "merhaba";
	std::cout << d;*/


/*signed int s = -1;
	unsigned int u = 1;
	if (s < u) {
		std::cout << "smaller";
	}
	else {
		std::cout << "not smaller";
		//When you compare these two variables in an if block.Unsigned one turns into signed one so that if block  returns you not smaller.
*/


/*unsigned short x{65535};
	std::cout << "x value" << x << '\n';

	x = 65536;
	std::cout << "x new value : " << x << '\n';

	x = 65537;
	std::cout << "x last value :" << x << '\n';
	
	//It doesn't show the correct value because of the overwlof
	*/


/*unsigned int x{3};
	unsigned int y{ 5 };

	std::cout << x - y << 'n';

	//When you try to substract two unsigned variables if the result is negative it tries to keep it like unsigned so that it doesn't show you the correct anwer.
	*/


/*float f{123456789.0f};
	std::cout << std::setprecision(6);
	std::cout << f << 'n';
	//This one gives you a sccientific notation.
	*/


	int8_t d = 6;
	int8_t a = 115;

	std::cout << a << '\n';
	//It give you s value because c++ thinks that its ASCII code
	std::cout << a + d;
	//When you try to sum them then it understands tehse are integers so gives 121
} 
	
	


