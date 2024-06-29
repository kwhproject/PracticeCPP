#include <iostream>
#include <vector>
#include <unordered_map>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::unordered_map<int, int> card;
	std::vector<int> check;

	int n, m;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		int temp;
		std::cin >> temp;

		card[temp] += 1;		
	}
	
	std::cin >> m;

	for (int i = 0; i < m; i++)
	{
		int temp;
		std::cin >> temp;

		check.push_back(temp);
	}

	for (int i = 0; i < check.size(); i++)
	{
		if (card.count(check[i]) == 0)
		{
			std::cout << 0 << " ";
		}
		else
		{
			std::cout << card[check[i]] << " ";
		}
	}


	return 0;
}