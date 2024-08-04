#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

bool compare(std::pair<std::string, int> a, std::pair<std::string, int> b)
{
	if (a.second > b.second)
	{
		return true;
	}
	else if (a.second < b.second)
	{
		return false;
	}
	else if (a.second == b.second)
	{
		if (a.first.size() == b.first.size())
		{
			for (int i = 0; i < a.first.size(); i++)
			{
				if (a.first[i] < b.first[i])
				{
					return true;
				}
				else if (a.first[i] > b.first[i])
				{
					return false;
				}
				else if (a.first[i] == b.first[i])
				{

				}
			}
			
		}
		else
		{
			return a.first.size() > b.first.size();
		}
	}
	
}

int main()
{
	/*
		자주 나오면 앞
		단어가 길면 앞
		알파벳 사전 순
	*/
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, m;
	std::cin >> n >> m;

	std::map<std::string, int> list;

	for (int i = 0; i < n; i++)
	{
		std::string temp;
		std::cin >> temp;

		if (temp.size() >= m && temp.size() <= 10)
		{
			if (list.find(temp) != list.end())
			{
				list[temp] += 1;
			}
			else
			{
				list.insert({ temp, 1 });
			}
		}
	}

	std::vector<std::pair<std::string, int>> check(list.begin(), list.end());
	std::sort(check.begin(), check.end(), compare);

	for (int i = 0; i < check.size(); i++)
	{
		std::cout << check[i].first << "\n";
	}

	return 0;
}