#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

bool compare(std::pair<int, int> a, std::pair<int, int> b)
{
	if (a.second == b.second)
	{
		return false;
	}
	else
		return a.second > b.second;
}

int main()
{
	int n;
	int mid = 0, least = 0, range;
	double average = 0.f;
	std::cin >> n;
	std::vector<int> list;
	std::map<int, int> m;
	

	for (int i = 0; i < n; i++)
	{
		int temp;
		std::cin >> temp;
		list.push_back(temp);
	}

	std::sort(list.begin(), list.end());

	for (int i = 0; i < list.size(); i++)
	{
		average += list[i];

		if (m.find(list[i]) != m.end())
		{
			m[list[i]] += 1;
		}
		else
		{
			m.insert({ list[i], 1 });
		}
	}

	std::vector<std::pair<int, int>> check(m.begin(), m.end());	// 최빈값
	std::sort(check.begin(), check.end(), compare);

	if (check.size() == 1)
	{
		least = check[0].first;
	}
	else if (check[0].second == check[1].second)
	{
		least = check[1].first;
	}
	else
	{
		least = check[0].first;
	}

	average = average / n;
	mid = list[(n - 1) / 2];
	range = list[n - 1] - list[0];

	std::cout << (int)floor(average + 0.5f) << "\n";
	std::cout << mid << "\n";
	std::cout << least << "\n";
	std::cout << range << "\n";

	return 0;
}