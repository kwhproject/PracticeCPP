#include <iostream>

int main()
{
	int a = 0;
	int b[9];
	int max = 0;

	for (int i = 0; i < 9; i++)
	{
		std::cin >> a;
		b[i] = a;
	}

	for (int i = 0; i < 9; i++)
	{
		if (b[i] > max)
			max = b[i];
	}

	for (int i = 0; i < 9; i++)
	{
		if (b[i] == max)
		{
			std::cout << max << std::endl;
			std::cout << i + 1;
		}
	}

	return 0;
}