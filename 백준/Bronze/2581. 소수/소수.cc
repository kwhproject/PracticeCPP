#include <iostream>
#include <vector>

int main()
{
	/*
		int m = 0, n = 0;

		std::cin >> m >> n;

		m <= x <= n 소수 찾아서 합과 최솟값 출력
	*/

	int n = 0, m = 0, total = 0;
	std::vector<int> check;
	std::vector<int> correct;

	std::cin >> n >> m;

	for (int i = n; i <= m; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
				check.push_back(j);
		}
		
		if (check.size() == 2)
			correct.push_back(i);

		check.clear();
	}

	if (correct.empty())
	{
		std::cout << "-1";
	}
	else
	{
		for (int i = 0; i < correct.size(); i++)
			total += correct.at(i);

		std::cout << total << std::endl;
		std::cout << correct.at(0) << std::endl;
	}

	
	
	return 0;
}