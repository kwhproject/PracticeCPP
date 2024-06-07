#include <iostream>
#include <algorithm>

int main()
{
	int a;
	int b[10];
	int dif = 0;
	
	for (int i = 0; i < 10; i++)
	{
		std::cin >> a;
		b[i] = a % 42;	
	}

	std::sort(b, b + 10);
	for (int i = 0; i < 10; i++)
	{
		if (b[i] != b[i + 1])
		{
			dif++;
		}
	}

	std::cout << dif;

	return 0;
}