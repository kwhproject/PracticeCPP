#include <iostream>
#include <algorithm>

int gcd(int a, int b)
{
	int temp;

	while (b > 0)
	{
		temp = a;
		a = b;
		b = temp % a;
	}

	return a;
}

int main()
{
	/*
		가로수 가장 적은 나무 수
		기준점으로 부터 떨어진 거리, 양의 정수

		기존 가로수 : 1, 3, 7, 13
		신설 가로수 : 5, 9, 11
		총합 가로수 : 1, 3, 5 ,7, 9, 11, 13 (2씩 떨어짐)

		기존 가로수 : 2, 6, 12, 18
		신설 가로수 : 4, 8, 10, 14, 16
		총합 가로수 : 2, 4, 6, 8, 10, 12, 14, 16, 18 (2씩 떨어짐)

		첫째 줄 : 심어져 있는 가로수 n
		둘째 줄 : 기존 가로수 위치들

	*/
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;			// 가로수 갯수
	int m[100000];	// 가로수의 위치
	int* check;		// 가로수 사이의 거리
	int res = 0;	// 최대 공약수
	int answer = 0;	// 새로 심어야 하는 가로수

	std::cin >> n;
	check = new int[n - 1];

	for (int i = 0; i < n; i++)
	{
		std::cin >> m[i];
	}

	std::sort(m, m + n);	// 가로수 정렬

	for (int i = 0; i < n - 1; i++)
	{
		check[i] = m[i + 1] - m[i];
	}

	res = check[0];

	for (int i = 1; i < n - 1; i++)
	{
		res = gcd(res, check[i]);
	}

	for (int i = 0; i < n - 1; i++)
	{
		answer += check[i] / res - 1;
	}

	std::cout << answer;
	
	return 0;
}