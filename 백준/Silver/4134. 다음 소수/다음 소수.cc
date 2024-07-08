#include <iostream>
#include <cmath>

bool isPrime(long long n)
{
	if (n == 0 || n == 1)
	{
		return false;
	}
	for (long long i = 2; i <= sqrt(n); i++)
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

	int testcase;
	long long n;

	std::cin >> testcase;

	for (int i = 0; i < testcase; i++)
	{
		std::cin >> n;

		while (true)
		{
			if (isPrime(n) == true)
			{
				std::cout << n << "\n";
				break;
			}
			else if (isPrime(n) == false)
			{
				n++;
			}
		}
	}


	return 0;
}