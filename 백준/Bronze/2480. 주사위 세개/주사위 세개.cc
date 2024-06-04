#include <iostream>

int main()
{
	int a;
	int b;
	int c;
	
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;

	if (a < 0 && b < 0 && c < 0 && a > 6 && b > 6 && c > 6)
		std::cout << "";
	else if ((a == b) || (a == c) || (b == c))
	{
		if ((a == b) && (b == c) && (c == a))
		{
			std::cout << 10000 + a * 1000;
		}
		else if (a == b)
			std::cout << 1000 + a * 100;
		else if (a == c)
			std::cout << 1000 + a * 100;
		else if (b == c)
			std::cout << 1000 + b * 100;
	}
	else if (a != b && a != c && b != c)
	{
		if (a > b)
		{
			if (a > c)
				std::cout << a * 100;
			else if (a < c)
				std::cout << c * 100;
		}
		else if (b > a)
		{
			if (b > c)
				std::cout << b * 100;
			else if (b < c)
				std::cout << c * 100;
		}

	}
	else
		std::cout << "";

	return 0;
}