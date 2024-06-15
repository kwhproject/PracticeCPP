#include <iostream>

int main()
{
	long long int n;
	std::cin >> n;

	/*
		i : 1		,	n - 2
		j : i + 1	,	n - 1
		k : j + 1	,	n

		ex
		i = 5, j = 6 k = 7
		5 * 6 * 7 = 210
	*/

	std::cout << (n - 2) * (n - 1) * n / 6 << std::endl;
	std::cout << 3 << std::endl;
	
	return 0;
}