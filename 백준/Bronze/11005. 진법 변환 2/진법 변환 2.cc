#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
	std::string result;
	int n = 0, b = 0;
	std::vector<int> save;

	std::cin >> n >> b;

	while (n > 0)
	{
		save.push_back(n % b);
		n /= b;
	}

	std::reverse(save.begin(), save.end());

	for (int i = 0; i < save.size(); i++)
	{
		if (save[i] > 9)
			result += save[i] + 65 - 10;
		else
			result += save[i] + 48;
	}

	std::cout << result;


	return 0;
}