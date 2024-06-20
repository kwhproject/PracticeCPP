#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int n = 0, k = 0, temp = 0;
	std::vector<int> check;

	std::cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		std::cin >> temp;
		check.push_back(temp);
	}

	std::sort(check.rbegin(), check.rend());
	
	std::cout << check.at(k - 1);

	return 0;
}