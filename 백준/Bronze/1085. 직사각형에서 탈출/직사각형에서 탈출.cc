#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int x = 0, y = 0, w = 0, h = 0;
	std::vector<int> check;


	std::cin >> x >> y >> w >> h;

	check.push_back(x);
	check.push_back(y);
	check.push_back(w-x);
	check.push_back(h-y);

	sort(check.begin(), check.end());

	std::cout << check.at(0);

	return 0;
}