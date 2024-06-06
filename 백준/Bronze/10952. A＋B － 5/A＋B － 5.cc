#include <iostream>

int main()
{
	int a = 0, b = 0;

	while (true)
	{
		std::cin >> a;
		std::cin >> b;

		if (a == 0 && b == 0)
			break;		

		std::cout << a + b << std::endl;
	}

	return 0;
}