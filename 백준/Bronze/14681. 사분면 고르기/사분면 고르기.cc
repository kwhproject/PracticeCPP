#include <iostream>

int main()
{
	int a;
	int b;
	
	std::cin >> a;
	std::cin >> b;

	if (a == 0 || b == 0 || a < -1000 || a > 1000 || b < -1000 || b > 1000)
		std::cout << "";
	else if(a > 0 && b > 0)
		std::cout << "1";
	else if (a < 0 && b > 0)
		std::cout << "2";
	else if (a < 0 && b < 0)
		std::cout << "3";
	else if (a > 0 && b < 0)
		std::cout << "4";

	return 0;
}