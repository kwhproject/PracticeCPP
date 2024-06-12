#include <iostream>
#include <vector>

int main()
{
	int n = 0;
	std::cin >> n;
	std::vector<int> check;

	for (int i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			while (n % i == 0)
			{
				check.push_back(i);
				n = n / i;
			}
		}
	}

	for (int i = 0; i < check.size(); i++)
	{
		std::cout << check.at(i) << std::endl;
	}	
	
	return 0;
}