#include <iostream>

int main()
{
	int total, n , price, count, check = 0;

	std::cin >> total;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> price;
		std::cin >> count;
		check += price * count;
	}

	if (total == check)
		std::cout << "Yes";
	else
		std::cout << "No";

	return 0;
}