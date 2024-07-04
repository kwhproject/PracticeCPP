#include <iostream>

int main()
{
	/*
		분수 A/B는 분자가 A, 분모가 B인 분수를 의미한다. A와 B는 모두 자연수라고 하자.
		두 분수의 합 또한 분수로 표현할 수 있다. 
		두 분수가 주어졌을 때, 그 합을 기약분수의 형태로 구하는 프로그램을 작성하시오. 
		기약분수란 더 이상 약분되지 않는 분수를 의미한다.

		(2 / 7) + (3 / 5)
		(10 / 35) + (21 / 35)
		31 / 35

		최소 공배수 구하기
		a1, a2 분자
		b1, b2 분모
	*/
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a1, a2, b1, b2, n = 1, nn = 1;

	std::cin >> a1 >> b1;
	std::cin >> a2 >> b2;

	if (b1 < b2)		// b2 분모가 더 큰 경우 서로 값 바꾸기
	{
		int temp;
		temp = b1;
		b1 = b2;
		b2 = temp;

		temp = a1;
		a1 = a2;
		a2 = temp;
	}

	while (true)
	{
		if ((b1 * n) % b2 == 0)
		{
			/*
				최소 공배수 = b1 * n
				분자 = 최소공배수 / 분모 * 기존 분자
				b1 * n / b1 * a1
				b1 * n / b2 * a2
			*/
			int numerator = b1 * n / b1 * a1 + b1 * n / b2 * a2;	// 분자
			int denominator = b1 * n;								// 분모
			int temp = denominator;

			for (int i = temp; i > 0; i--)	// 공통 약수로 나누어 기약분수로 만들기
			{
				if (numerator % i == 0 && denominator % i == 0)
				{
					numerator /= i;
					denominator /= i;
				}

			}

			std::cout << numerator << " ";
			std::cout << denominator;
			break;
		}
		else
		{
			n++;
		}
	}

	return 0;
}