#include <iostream>
#include <string>
#include <map>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	std::map<std::string, bool> list;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::string temp1, temp2;
		std::cin >> temp1 >> temp2;

		if (temp1 == "ChongChong")
		{
			list.insert({ temp2, true });
		}
		else if (temp2 == "ChongChong")
		{
			list.insert({ temp1, true });
		}
		else if (list.find(temp1) != list.end())
		{
			list.insert({ temp2, true });
		}
		else if (list.find(temp2) != list.end())
		{
			list.insert({ temp1, true });
		}
		
	}

	std::cout << list.size() + 1;	// ChongChong은 무조건 있으므로 +1

	return 0;
}