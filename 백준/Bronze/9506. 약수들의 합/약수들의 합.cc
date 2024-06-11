#include <iostream>
#include <vector>

int main()
{
	int n = 0, total = 0;
	std::vector<int> check;

	while (true)
	{
		std::cin >> n;

		if (n == -1)
			break;

		for (int i = 1; i <= n; i++)
		{
			if (n % i == 0)
				check.push_back(i);
		}

		for (int i = 0; i < check.size() - 1; i++)
		{
			total += check.at(i);
		}

		if (n == total)
		{
			std::cout << n << " = ";
			for (int i = 0; i < check.size() - 1; i++)
			{
				if (i < check.size() - 2)
					std::cout << check.at(i) << " + ";
				else
					std::cout << check.at(i);
			}
		}
		else
			std::cout << n << " is NOT perfect.";

		// reset
		total = 0;
		check.clear();
		std::cout << std::endl;

	}	
	
	return 0;
}