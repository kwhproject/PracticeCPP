#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
	std::string a;
	std::vector<int> check;

	std::cin >> a;

	for (int i = 0; i < a.size(); i++)
	{
		check.push_back(a[i] - '0');
	}

	std::sort(check.rbegin(), check.rend());

	for (int i = 0; i < check.size(); i++)
	{
		std::cout << check.at(i);
	}

	return 0;
}