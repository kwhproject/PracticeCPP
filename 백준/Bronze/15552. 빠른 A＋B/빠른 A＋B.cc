#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n, a, b;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> a;
		std::cin >> b;
		std::cout << a + b << "\n";
	}

	return 0;
}