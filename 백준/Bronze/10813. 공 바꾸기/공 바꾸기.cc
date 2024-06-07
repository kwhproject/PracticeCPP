#include <iostream>

int main()
{
	int n, m, i, j, temp = 0;

	std::cin >> n >> m;

	int arr[100];

	for (int i = 0; i < n; i++)
	{
		arr[i] = i + 1;
	}

	for (int x = 0; x < m; x++)
	{
		std::cin >> i >> j;

		temp = arr[i - 1];
		arr[i - 1] = arr[j - 1];
		arr[j - 1] = temp;
	}

	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << " ";
	}

	return 0;
}