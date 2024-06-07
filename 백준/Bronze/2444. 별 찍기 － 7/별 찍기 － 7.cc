#include <iostream>
#include <string>

int main()
{
	int n;
	std::cin >> n;

	/*
			공백4	별 1
			공백3	별 3
			공백2	별 5
			공백1	별 7
			공백0	별 9
			공백1	별 7
			공백2	별 5
			공백3	별 3
			공백4	별 1
	*/

	for (int i = 0; i < n; i++)
	{
		for (int j = n - i - 1; j > 0; j--)
		{
			std::cout << " ";
		}
		for (int k = 0; k < 2 * i + 1; k++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	n = n - 1;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			std::cout << " ";
		}
		for (int k = 2 * (n - i) -1; k > 0; k--)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}


	return 0;
}