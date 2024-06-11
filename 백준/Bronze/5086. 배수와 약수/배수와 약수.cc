#include <iostream>

int main()
{
	int a = 1, b = 0;

	while (a != b)
	{
		std::cin >> a >> b;

		if (a > b)
		{
			if (a % b == 0)
				std::cout << "multiple" << std::endl;
			else
				std::cout << "neither" << std::endl;
		}
		else if (a < b)
		{
			if (b % a == 0)
				std::cout << "factor" << std::endl;
			else
				std::cout << "neither" << std::endl;
		}

	}
	
	return 0;
}