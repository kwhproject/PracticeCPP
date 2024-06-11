#include <iostream>
#include <vector>

int main()
{
	int n = 0, num = 0;
	std::vector<int> check;
	std::vector<int> correct;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> num;

		for (int j = 1; j <= num; j++)
		{
			if (num % j == 0)
				check.push_back(j);
		}

		if (check.size() == 2)
			correct.push_back(num);

		check.clear();
	}

	std::cout << correct.size();
	
	return 0;
}