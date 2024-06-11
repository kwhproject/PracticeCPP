#include <iostream>
#include <vector>

int main()
{
	int n = 0, k = 0;
	std::vector<int> check;

	std::cin >> n >> k;

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			check.push_back(i);
	}

	if (check.size() >= k)
		std::cout << check.at(k - 1);
	else
		std::cout << "0";
	
	
	return 0;
}