#include <iostream>
#include <string>
#include <map>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, count = 0;
	std::map<std::string, bool> list;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::string temp;
		std::cin >> temp;
		
		if (temp == "ENTER")
		{
			count += list.size();
			list.clear();
		}
		else
		{
			list.insert({ temp, true });
		}
	}

	count += list.size();
	std::cout << count;

	return 0;
}