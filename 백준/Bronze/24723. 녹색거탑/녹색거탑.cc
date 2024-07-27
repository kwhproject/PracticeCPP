#include <iostream>
#include <math.h>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	/*
		녹색거탑
		n층
		
		바닥으로 내려오는 경우의 수 구하기
	*/

	int n;
	std::cin >> n;
	std::cout << pow(2, n);

	return 0;
}