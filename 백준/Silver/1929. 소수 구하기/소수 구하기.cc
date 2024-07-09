#include <iostream>
#include <cmath>

bool isPrime(int n)
{
	if (n == 0 || n == 1)
	{
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, m;

	std::cin >> n >> m;

	for (int i = n; i <= m; i++)
	{
		if (isPrime(i) == true)
		{
			std::cout << i << "\n";
		}
	}

	return 0;
}