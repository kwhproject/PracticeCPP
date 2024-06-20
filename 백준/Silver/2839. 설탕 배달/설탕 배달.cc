#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	/*
		설탕 3, 5 두가지
		n킬로그램 배달

		ex ) n = 18
		5킬로 3개 3킬로 1개 
		출력 : 4
	*/
	int n = 0, count5 = 0, count3 = 0;
	std::vector<int> check;

	std::cin >> n;

	count5 = n / 5;
	count3 = n / 3;

	for (int i = count5; i > -1; i--)
	{
		for (int j = 0; j <= count3; j++)
		{
			if (i * 5 + j * 3 == n)
				check.push_back(i + j);
		}
	}
	
	std::sort(check.begin(), check.end());

	if (check.empty())
		std::cout << -1;
	else
		std::cout << check.at(0);
	
	return 0;
}