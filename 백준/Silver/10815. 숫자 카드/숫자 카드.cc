#include <iostream>
#include <algorithm>

int main()
{
	int a[500001];
	int b[500001];
	int c[500001] = { 0, };

	int n, m;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	std::cin >> m;

	for (int i = 0; i < m; i++)
	{
		std::cin >> b[i];
	}

	std::sort(a, a + n);

	for (int i = 0; i < m; i++)
	{
		int left = 0;
		int right = n - 1;

		while (left <= right)
		{
			int mid = (left+ right) / 2;

			if (a[mid] == b[i])
			{
				c[i] = 1;
				break;
			}

			if (a[mid] > b[i])
			{
				right = mid - 1;
			}
			else
			{
				left = mid + 1;
			}
		}
	}

	for (int i = 0; i < m; i++)
	{
		std::cout << c[i] << ' ';
	}

	return 0;
}
