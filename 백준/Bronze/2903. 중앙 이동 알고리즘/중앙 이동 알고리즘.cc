#include <iostream>

int main()
{
	/*
		sum = 이전값

		꼭짓점 갯수 = n + (n -1)
		2, 3, 5, 9, 17, 33
	*/

	int n = 0, sum = 2;
	
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		sum = sum * 2 - 1;
	}

	std::cout << sum * sum;

	return 0;
}