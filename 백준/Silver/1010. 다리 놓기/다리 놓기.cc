#include <iostream>

int main()
{
	/*
		이항계수
		n! / m!(n - m)!
	*/
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t, n, m, answer;
	std::cin >> t;

	for (int i = 0; i < t; i++)
	{
		answer = 1;
		std::cin >> n >> m;
		
		for (int i = 0; i < n; i++)
		{
			answer *= m - i;	// 분자	(n - m + 1)(n - m + 2)
			answer /= 1 + i;	// 분모	m!
		}
		std::cout << answer << "\n";

	}

	return 0;
}