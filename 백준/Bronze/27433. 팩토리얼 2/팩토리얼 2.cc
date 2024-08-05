#include <iostream>

int main()
{
	long long n, answer = 1;
	std::cin >> n;

	while (n != 0)
	{
		if (n != 0)
		{
			answer *= n;
			n--;
		}
	}

	std::cout << answer;

	return 0;
}