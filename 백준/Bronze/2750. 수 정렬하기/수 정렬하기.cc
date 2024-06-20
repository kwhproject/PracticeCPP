#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int n = 0, temp = 0;
	std::vector<int> check;

	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> temp;
		check.push_back(temp);
	}

	std::sort(check.begin(), check.end());

	for (int i = 0; i < check.size(); i++)
	{
		std::cout << check.at(i) << std::endl;
	}

	return 0;
}