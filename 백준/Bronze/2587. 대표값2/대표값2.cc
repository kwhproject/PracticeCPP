#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int temp;
	std::vector<int> check;

	for (int i = 0; i < 5; i++)
	{
		std::cin >> temp;
		check.push_back(temp);
	}

	std::sort(check.begin(), check.end());

	std::cout << (check.at(0) + check.at(1) + check.at(2) + check.at(3) + check.at(4)) / 5 << std::endl;
	std::cout << check.at(2);
	return 0;
}