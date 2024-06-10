#include <iostream>

int main()
{
	long long int a = 0, b = 0, v = 0, total = 0, day = 1;
	std::cin >> a >> b >> v;

	/*
		5, 3, 10

		v에서 미리 a를 뺀 후에 a-b를 나눈다

		total이 0으로 떨어질 경우		day = day + 1
		total이 0이상 남을 경우		day = day + 2
	*/
	if (a >= v)
		std::cout << day;
	else
	{
		day = (v - a) / (a - b);
		total = (v - a) % (a - b);
		if (total == 0)
			day = day + 1;

		else if(total != 0)	
			day = day + 2;

		std::cout << day;
	}
	
	return 0;
}