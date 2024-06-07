#include <iostream>

int main()
{
	int a = 0;
	int b = 0;
	int c[10000];
	int d = 0;

	std::cin >> a;
	std::cin >> d;
	
	for (int i = 0; i < a; i++)
	{
		std::cin >> b;
		c[i] = b;
	}

	for (int i = 0; i < a; i++)
	{
		if (c[i] < d)
			std::cout << c[i] << " ";
	}

	return 0;
}