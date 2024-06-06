#include <iostream>

int main()
{
	int t;
	std::cin >> t;

	for (int i = 0; i < t; i++)
	{
		int a;
		int b;

		std::cin >> a;
		std::cin >> b;

		std::cout << a+b << std::endl;
	}

	return 0;
}