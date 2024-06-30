#include <iostream>
#include <unordered_map>

int main()
{
	/*
		A-B + B-A

		A		AnB			B
		1		2,4			3,5,6
	*/
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, m, count = 0;
	std::cin >> n >> m;
	std::unordered_map<int, bool> a;
	std::unordered_map<int, bool> b;
	
	for (int i = 0; i < n; i++)
	{
		int temp;
		std::cin >> temp;

		a.insert({temp, 1});		
	}

	for (int i = 0; i < m; i++)
	{
		int temp;
		std::cin >> temp;

		if (a.count(temp) == 0)
		{
			b.insert({ temp, 1 });
		}
		else
		{
			b.insert({ temp, 0 });
			count++;
		}
	}

	std::cout << a.size() + b.size() - count * 2;

	return 0;
}