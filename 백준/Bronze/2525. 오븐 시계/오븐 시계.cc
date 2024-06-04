#include <iostream>

int main()
{
	int a;
	int b;
	int c;
	
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;

	if (a < 0 || a > 23 || b < 0 || b > 59 || c < 0 || c > 1000)
		std::cout << "";
	else if (c >= 60)
	{
		a = a + (c / 60);
		b = b + (c % 60);

		if (b >= 60)
		{
			a = a + 1;
			b = b % 60;
		}

		if (a >= 24)
			a = a % 24;
			
		std::cout << a << " " << b;
	}
	else if (c < 60)
	{
		b = b + c;

		if (b >= 60)
		{
			a = a + 1;
			b = b % 60;
		}

		if (a >= 24)
			a = a % 24;

		std::cout << a << " " << b;
	}
	else
		std::cout << "";

	return 0;
}