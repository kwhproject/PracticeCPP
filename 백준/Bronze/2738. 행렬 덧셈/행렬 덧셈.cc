#include <iostream>

int main()
{
	int **a, **b;
	int n, m;	// n = row, m = col
	int num, sum;

	std::cin >> n >> m;

	a = new int* [n];
	for (int i = 0; i < n; i++)
		a[i] = new int[m];

	b = new int* [n];
	for (int i = 0; i < n; i++)
		b[i] = new int[m];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cin >> num;
			a[i][j] = num;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cin >> num;
			b[i][j] = num;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			sum = a[i][j] + b[i][j];
			std::cout << sum << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}