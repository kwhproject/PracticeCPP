#include <iostream>
#include <algorithm>

int main()
{
	int a = 0;
	int b = 0;
	int* c;

	std::cin >> a;
	c = (int*)malloc(sizeof(int) * a);
	
	for (int i = 0; i < a; i++)
	{
		std::cin >> b;
		c[i] = b;
	}

	std::sort(c, c + a);
	
	std::cout << c[0] << " " << c[a - 1];
	return 0;
}