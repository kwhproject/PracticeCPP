#include <iostream>

int main()
{
	
	int a = 0;
	int b = 0;
	int c[100];
	int d = 0;
	int check = 0;

	std::cin >> a;
	
	for (int i = 0; i < a; i++)
	{
		std::cin >> b;
		c[i] = b;
	}

	std::cin >> d;

	for (int i = 0; i < a; i++)
	{
		if (c[i] == d)
			check++;
	}

	std::cout << check;

	return 0;
}