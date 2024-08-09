#include <iostream>
#include <cmath>

void cantor(int n)
{
	int size = pow(3, n - 1);
	if (n == 0)
	{
		std::cout << "-";
		return;
	}

	cantor(n - 1);
	for (int i = 0; i < size; i++) 
	{
		std::cout << " ";
	}
	cantor(n - 1);
}


int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	/*
		1. '-'의 개수 3의제곱
		2. 문자열을 3등분, 가운데 문자열 공백으로 변경
		3. '-'을 3등분, 가운데 문자열 공백으로 변경, 모든 선의 길이가 1이 될때까지 반복
	*/
	int n;
	while (std::cin >> n) 
	{
		cantor(n);
		std::cout << "\n";
	}
	


	return 0;
}