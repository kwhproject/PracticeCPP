#include <iostream>
#include <cmath>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	/*
		n개의 창문, n개의 사람, 처음에 닫혀있음
		닫힘 0, 열림 1

		n == 3
		1번째 사람 (1, 1, 1)
		2번째 사람 (1, 0, 1)
		3번째 사람 (1, 0, 0)

		n == 4
		1번째 사람 (1, 1, 1, 1)
		2번째 사람 (1, 0, 1, 0)
		3번째 사람 (1, 0, 0, 0)
		4번째 사람 (1, 0, 0, 1)
		
		숫자가 너무 커서 반복문으로 구현 힘듦
	*/

	int n;
	std::cin >> n;
	std::cout << (int)sqrt(n);

	return 0;
}