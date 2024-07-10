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
	/*
		베르트랑 공준
		n < ? < 2n 소수가 적어도 하나 있음
		ex) 10 < ? < 20		소수 : 11, 13, 17, 19
	*/
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n = 1, count = 0;

	while (n != 0)
	{
		
		std::cin >> n;

		for (int i = n + 1; i <= n * 2; i++)
		{
			if (isPrime(i) == true)
			{
				count++;
			}
		}

		if (n != 0)
			std::cout << count << "\n";
		
		count = 0;
	}
	

	return 0;
}