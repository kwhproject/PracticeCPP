#include <iostream>

int main()
{
	int a;
	int b;
	
	std::cin >> a;
	std::cin >> b;

	if (a < 0 || a > 23 || b < 0 || b > 59)
		std::cout << "";
	else if (b < 45)
	{
		a = a - 1;
		b = b - 45 + 60;

		if (a < 0)
			a = 23;

		std::cout << a << " " << b;
	}
	else if (b >= 45)
	{
		b = b - 45;
		std::cout << a << " " << b;
	}
	else
		std::cout << "";

	return 0;
}