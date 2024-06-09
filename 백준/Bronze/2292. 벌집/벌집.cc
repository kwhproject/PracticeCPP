#include <iostream>

int main()
{
	/*
		기본 sum = 1;
		6칸 인접

		1 -> 2, 3, 4, 5, 6, 7
		4 -> 1, 3, 12, 13, 14, 5 

		1 7 19 37 61
		sum = 1
		sum = 1 + 6
		sum = 1 + 6 + 12
		sum = 1 + 6 + 12 + 18

	*/
	long long int n = 0, sum = 1, pass = 0;

	std::cin >> n;

	if (n < 1 || n > 1000000000)
		std::cin >> n;
	else if (n == 1)
		std::cout << 1;
	else
	{
		while (sum < n)
		{
			sum += 6 * pass;
			/*
				1
				1 + 6 = 7
				7 + 12 = 19
			*/
			pass++;
		}

		std::cout << pass;
	}

	return 0;
}