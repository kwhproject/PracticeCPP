#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int n = 0;
	int x, y;

	std::vector<std::pair<int, int>> xy;

	std::cin >> n;	// 1 <= n <= 100000

	for (int i = 0; i < n; i++)
	{
		std::cin >> x >> y;

		xy.push_back(std::make_pair(x, y));
	}

	std::sort(xy.begin(), xy.end());

	for (int i = 0; i < xy.size(); i++)
	{
		std::cout << xy.at(i).first << " " << xy.at(i).second << "\n";
	}


	return 0;
}