#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, answer = 1;
	std::cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		answer = answer * i;
	}

	std::cout << answer;
	return 0;
}