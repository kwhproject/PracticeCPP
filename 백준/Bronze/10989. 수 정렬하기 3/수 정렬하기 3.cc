#include <iostream>

int main()
{
	/*
		1 <= n <= 10000

		- count sort (계수 정렬)
		각각의 수가 몇 번 나오는지 확인하여 출력

		1, 1, 3, 2, 2, 4

		arr[1] += 1;
		arr[1] += 1;
		arr[3] += 1;
		arr[2] += 1;
		arr[2] += 1;
		arr[4] += 1;

		for (int i = 0; i < 10001; i++)
		{
			for (int j = 1; j <= arr[i]; j++)	// cf) 자연수만 출력해야 하므로 1 <= j
			{
				std::cout << i << std::endl;
			}
		}

	*/

	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int n = 0, check = 0;
	int arr[10001] = {};
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> check;
		arr[check] += 1;
	}

	for (int i = 1; i < 10001; i++)
	{
		for (int j = 1; j <= arr[i]; j++)
		{
			std::cout << i << "\n";
		}
	}

	return 0;
}