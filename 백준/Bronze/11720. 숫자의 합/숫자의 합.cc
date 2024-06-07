#include <iostream>
#include <string>

int main()
{
	std::string a;
	int n, total = 0;

	std::cin >> n;
	std::cin >> a;

	for (int i = 0; i < n; i++)
	{
		total += a[i] - '0';
	}

	std::cout << total;

	return 0;
}