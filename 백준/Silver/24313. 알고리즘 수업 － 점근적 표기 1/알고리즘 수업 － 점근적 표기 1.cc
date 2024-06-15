#include <iostream>

int main()
{
	/*
		예시
		7 7
		8
		1
	
		f(n) = 7n + 7
		g(n) = n
		c = 8

		n0 = 1

		f(1) = 14, c * g(1) = 8
		
		c, n	범위 0 ~ 100
		a		범위 |0| ~ |100|
	*/
	
	int a1 = 0, a0 = 0;
	int c = 0;
	int n = 0;

	int fn = 0;
	int c_gn = 0;

	std::cin >> a1 >> a0;
	std::cin >> c;
	std::cin >> n;

	fn = a1 * n + a0;
	c_gn = c * n;

	if (fn <= c_gn && a1 <= c)
		std::cout << 1 << std::endl;
	else
		std::cout << 0 << std::endl;


	
	
	return 0;
}