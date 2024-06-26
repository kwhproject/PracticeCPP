#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

bool compare(std::pair<std::string, std::string> a, std::pair<std::string, std::string> b)
{
	return a.first > b.first;
}

int main()
{
	/*
		unordered_map

		key - value
		string - string

		value가 enter일 경우에만 출력
	*/

	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	std::unordered_map<std::string, std::string> log;
	
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::string a, b;
		std::cin >> a >> b;
		
		if (log.count(a) == 0)
			log.insert(make_pair(a, b));
		else
			log[a] = b;
	}

	std::vector<std::pair<std::string, std::string>> check(log.begin(), log.end());
	std::sort(check.begin(), check.end(), compare);

	for (auto& iter : check)
	{
		if (iter.second == "enter")
			std::cout << iter.first << "\n";
	}

	return 0;
}