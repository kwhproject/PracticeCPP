#include <iostream>


int main()
{
	/*
		참고 주소 : https://www.acmicpc.net/board/view/128525
		1 <= n <= 10000
		 
		6이 적어도 3개 연속으로 들어감

		1 : 666
		2 : 1666
		3 : 2666
		6 : 5666
		7 : 6660
		187 : 66666
		500 : 166699

		n번째 : n번째로 작은 종말의 수
	*/

	int n = 0, count = 0, title = 0, temp = 0;
	std::cin >> n;

	while (count != n)
	{
		title++;
		temp = title;

		// 수에 6이 적어도 3개이상 들어가는지 판별
		while (temp != 0)
		{
			if (temp % 1000 == 666) // 종말의 숫자라면
			{
				count++;
				break;
			}
			else temp /= 10; // 일의 자리수 삭제
		}
	}

	std::cout << title;

	return 0;
}