#include <iostream>

int main()
{
	double a;
	double b;
	double c;
	std::cin >> a;
	std::cin >> b;
	c = a / b;
	std::cout.precision(10);
	std::cout << c;

	return 0;
}