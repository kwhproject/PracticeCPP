#include <iostream>

int main()
{
	int a;
	int b;

	std::cin >> a;
	std::cin >> b;

	if (a > b)
		std::cout << ">";
	else if (a < b)
		std::cout << "<";
	else if (a == b)
		std::cout << "==";

	return 0;
}