#include <iostream>
#include <map>
#include <string>

int main()
{
	/*
		듣도 못한 사람 n
		보도 못한 사람 m

		n줄 듣도 못한 사람
		n+2줄 보도 못한 사람

		1 -> 듣도 못한 사람
		2 -> 듣보잡
		3 -> 보도 못한 사람
	*/
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, m, count = 0;
	std::map<std::string, int> list;

	std::cin >> n >> m;

	for (int i = 0; i < n + m; i++)
	{
		std::string temp;
		std::cin >> temp;

		if (i >= n)		// n + 2 번째 줄
		{
			if (list.count(temp) == true)
			{
				list[temp] = 2;
				count++;
			}
			else
			{
				list.insert({ temp, 3 });
			}
		}
		else
		{
			list.insert({ temp, 1 });
		}
	}

	std::cout << count << "\n";
	for (auto& iter : list)
	{
		if (iter.second == 2)
			std::cout << iter.first << "\n";
	}

	return 0;
}