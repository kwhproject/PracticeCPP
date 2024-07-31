#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, count;
	std::cin >> count;
	std::vector<int> v;

	for (int i = 0; i < count; i++)
	{
		int temp;
		std::cin >> temp;
		v.push_back(temp);
	}

	std::sort(v.begin(), v.end());

	std::cout << v[0] * v[count - 1];


	return 0;
}