#include <iostream>

int fibo(int n)
{
	if (n >= 2)			{	return fibo(n - 1) + fibo(n - 2);	}
	else if (n == 1)	{	return 1;	}
	else if (n == 0)	{	return 0;	}
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	std::cin >> n;
	std::cout << fibo(n);

	return 0;
}