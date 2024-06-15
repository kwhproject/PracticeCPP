#include <iostream>

int main()
{
	int n = 0;
	int x = 0, y = 0;
	int max_x = 0, max_y = 0, min_x = 0, min_y = 0;
	int** save;

	std::cin >> n;
	save = new int* [n];

	for (int i = 0; i < n; i++)
	{
		save[i] = new int[2];

		std::cin >> x >> y;

		save[i][0] = x;
		save[i][1] = y;
	}

	max_x = save[0][0];
	min_x = save[0][0];
	max_y = save[0][1];
	min_y = save[0][1];

	for (int i = 0; i < n; i++)
	{
		if (save[i][0] > max_x)
		{
			max_x = save[i][0];
		}
		if (save[i][1] > max_y)
		{
			max_y = save[i][1];
		}
		if (save[i][0] < min_x)
		{
			min_x = save[i][0];
		}
		if (save[i][1] < min_y)
		{
			min_y = save[i][1];
		}
	}

	std::cout << (max_x - min_x) * (max_y - min_y);
	return 0;
}