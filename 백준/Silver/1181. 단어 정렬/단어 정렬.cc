#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool compare(std::string a, std::string b)
{
	if (a.size() == b.size())
	{
		return a < b;
	}
	else
		return a.size() < b.size();
}

int main()
{
	int n = 0;
	std::string word;
	std::vector<std::string> check;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> word;
		check.push_back(word);
	}

	std::sort(check.begin(), check.end(), compare);
	check.erase(std::unique(check.begin(), check.end()), check.end());

	for (int i = 0; i < check.size(); i++)
	{
		std::cout << check.at(i) << "\n";
	}

	return 0;
}