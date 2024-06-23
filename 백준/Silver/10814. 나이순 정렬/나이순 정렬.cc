#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool compare(std::pair<int, std::string> a, std::pair<int, std::string> b)
{
	if (a.first == b.first)
	{
		return false;
	}
	else
		return a.first < b.first;
}

int main()
{
	int n = 0;
	std::vector<std::pair<int, std::string>> check;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		int age;
		std::string name;
		std::pair<int, std::string> temp;

		std::cin >> age >> name;
		temp.first = age;
		temp.second = name;

		check.push_back(temp);
	}

	std::stable_sort(check.begin(), check.end(), compare);

	for (int i = 0; i < check.size(); i++)
	{
		std::cout << check.at(i).first << " " << check.at(i).second << "\n";
	}


	return 0;
}