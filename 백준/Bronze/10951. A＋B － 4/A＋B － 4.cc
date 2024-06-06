#include <iostream>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int a = 0, b = 0;

	while (std::cin >> a >> b)
	{
		std::cout << a + b << std::endl;
	}

	return 0;
}