#include <iostream>


int main()
{
	int a, b, c, d, e, f;
	int x, y;

	std::cin >> a >> b >> c >> d >> e >> f;

	for (int i = -999; i < 1000; i++)
	{
		for (int j = -999; j < 1000; j++)
		{
			x = i;
			y = j;

			if ((a * x) + (b * y) == c && (d * x) + (e * y) == f)
			{
				std::cout << x << " " << y;
				break;
			}

		}
	}

	return 0;
}