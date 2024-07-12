#include <iostream>
#include <cmath>

bool isPrime(int n)
{
	if (n == 0 || n == 1)
	{
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	/*
		- 골드바흐 파티션
		2보다 큰 짝수는 두 소수의 합으로 나타낼 수 있다

		소수 : 2, 3, 5 ,7, 11, 13

		4 = 2 + 2
		6 = 3 + 3
		8 = 3 + 5
		10 = 3 + 7, 5 + 5

		소수 배열 check[]
		10을 구할 때 10보다 작은 소수만 체크
		2, 3, 5, 7
		7, 5, 3, 2

		int left, right;
		left는 0부터 ++
		right는 10보다 작은 소수중 가장 큰 순서부터 --

	*/
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t, n, count = 0;
	int check[78500] = {};	// 1000000보다 작은 수는 78498개의 소수가 있음

	for (int i = 2; i <= 1000000; i++)	// 숫자 1000000까지 소수 구하기
	{
		if (isPrime(i) == true)
		{
			check[count] = i;
			count++;
		}
	}

	std::cin >> t;

	for (int i = 0; i < t; i++)
	{
		int left = 0, right = 0, answer = 0, order = count;
		std::cin >> n;

		while (check[order] > n)
		{
			order--;
		}

		right = order - 1;

		while (left <= right)	// 순서만 다른 것을 방지
		{
			if (n == check[left] + check[right])	// 두 소수의 합이 n일 경우
			{
				answer++;
				left++;
				right--;
			}
			else if (n > check[left] + check[right])// 두 소수의 합이 작을 경우
			{
				left++;
			}
			else									// 두 소수의 합이 클 경우
			{
				right--;
			}

		}

		std::cout << answer << "\n";
		
	}
			

	return 0;
}