#include <iostream>


int main()
{
	int n = 0, m = 0, check = 0, add = 0;
	int million, hundredThousand, tenThousand, thousand, hundred, ten, one;
	
	std::cin >> n;
	
	/*
		자연수 N
		M의 분해합 = N 인경우 M을 N의 생성자

		245의 분해합 = 256(245 + 2 + 4 + 5)
		256의 생성자 = 245
	*/

	for (int i = 0; i < n; i++)
	{
		m = i;
		check = i;

		million = check / 1000000;
		check = check % 1000000;

		hundredThousand = check / 100000;
		check = check % 100000;

		tenThousand = check / 10000;
		check = check % 10000;

		thousand = check / 1000;
		check = check % 1000;

		hundred = check / 100;
		check = check % 100;

		ten = check / 10;
		check = check % 10;

		one = check / 1;

		add = million + hundredThousand + tenThousand + thousand + hundred + ten + one;
		if (add + m == n)
		{
			std::cout << m;
			break;
		}
		
	}
	if (add + m != n)
		std::cout << 0;


	return 0;
}