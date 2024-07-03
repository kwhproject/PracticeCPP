#include <iostream>

int main()
{
	/*
		a, b 정수중 a가 더 큰 값이라 가정
		a % (b * n) == 0 이 될때까지 n을 ++

		a = 3, b = 5
		a = 5, b = 3

		(5 * 1) % 3 = 2
		(5 * 2) % 3 = 1
		(5 * 3) % 3 = 0
	*/
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	long long int a, b, n = 1;
	std::cin >> a >> b;

	if (a < b)	// a가 b보다 작으면 값 바꾸기
	{
		int temp;
		temp = a;
		a = b;
		b = temp;
	}

	while (true)
	{
		if ((a * n) % b == 0)
		{
			std::cout << a * n;
			break;
		}
		else
		{
			n++;
		}
	}
	

	return 0;
}