#include <iostream>

int main()
{
	int n, m, i, j, k;

	std::cin >> n >> m;

	int arr[100];

	for (int i = 0; i < n; i++)
	{
		arr[i] = 0;
	}

	for (int x = 0; x < m; x++)
	{
		std::cin >> i >> j >> k;

		for (int y = i - 1; y < j; y++)
		{
			arr[y] = k;
		}
	}

	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << " ";
	}

	return 0;
}