#include <iostream>

int main()
{
	int a;
	int b;
	int c;
	bool d;

	std::cin >> a;
	std::cin >> b;
	std::cin >> c;

	std::cout << (a + b) % c << std::endl;
	std::cout << ((a % c) + (b % c)) % c << std::endl;
	std::cout << (a * b) % c << std::endl;
	std::cout << ((a % c) * (b % c)) % c << std::endl;
		
	return 0;
}