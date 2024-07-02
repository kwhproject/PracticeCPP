#include <iostream>

int main()
{
	/*
		common 공약수
		a, b의 공약수로 나눈 값을 answer에 곱하기
		answer = answer * common;
		a = a / common;
		b = b / common;

		만약 공약수가 없을 때 common++;

		a 또는 b가 common보다 작을 때 
		answer = answer * a * b
	*/
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b, t;
	int answer = 1, common = 2;
	std::cin >> t;

	for (int i = 0; i < t; i++)
	{
		std::cin >> a >> b;

		while (true)
		{	
			if (a % common == 0 && b % common == 0)
			{
				answer = answer * common;
				a = a / common;
				b = b / common;
			}
			else if (a < common || b < common)
			{
				answer = answer * a * b;
				std::cout << answer << "\n";
				break;
			}
			else
			{
				common++;
			}
		}

		answer = 1, common = 2; // 초기화
	}



	

	return 0;
}