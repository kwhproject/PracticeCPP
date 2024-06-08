#include <iostream>

int main()
{
	int** a;
	int n = 9, m = 9;	// n = row, m = col
	unsigned int row = 0, col = 0, num, max = 0;

	// new
	a = new int* [n];
	for (int i = 0; i < n; i++)
		a[i] = new int[m];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cin >> num;
			if (num >= 100)
				std::cin >> num;
			a[i][j] = num;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] > max)
			{
				row = i;
				col = j;
				max = a[i][j];
			}
		}
	}

	std::cout << max << std::endl;
	std::cout << row + 1 << " " << col + 1;

	// delete
	for (int i = 0; i < n; i++)
	{
		delete[] a[i];
	}
	delete[] a;


	return 0;
}