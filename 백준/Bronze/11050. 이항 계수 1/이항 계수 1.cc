#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, k, answer1 = 1, answer2 = 1, answer3 = 1;
	std::cin >> n >> k;
	
	/*
		이항계수
		n! / (n - k)! * k!

		answer1 = n!
		answer2 = (n - k)!
		answer3 = k!
	*/
	for (int i = 1; i <= n; i++)
	{
		answer1 = answer1 * i;
	}

	for (int i = 1; i <= n - k; i++)
	{
		answer2 = answer2 * i;
	}

	for (int i = 1; i <= k; i++)
	{
		answer3 = answer3 * i;
	}


	std::cout << answer1 / (answer2 * answer3);
	return 0;
}