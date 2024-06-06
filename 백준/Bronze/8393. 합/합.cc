#include <iostream>

int main()
{
	int a = 0;
	int n;
	std::cin >> n;

	for (int i = 0; i <= n; i++)
	{
		a += i;
	}

	std::cout << a;

	return 0;
}