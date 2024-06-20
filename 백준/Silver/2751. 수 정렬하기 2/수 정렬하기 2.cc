#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	unsigned int n = 0, temp;
	std::vector<int> check;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> temp;

		check.push_back(temp);
	}

	std::sort(check.begin(), check.end());

	for (int i = 0; i < check.size(); i++)
		std::cout << check.at(i) << "\n";

	return 0;
}