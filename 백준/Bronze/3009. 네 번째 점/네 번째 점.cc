#include <iostream>

int main()
{
	int a = 0, b = 0;
	int check[3][3];

	for (int i = 0; i < 3; i++)
	{
		std::cin >> a >> b;

		check[i][0] = a;
		check[i][1] = b;
		
		/*
			0행	30 20
			1행 10 10
			2행 10 20
		*/
	}

	if (check[0][0] == check[1][0])
	{
		std::cout << check[2][0] << " ";
	}
	else if (check[1][0] == check[2][0])
	{
		std::cout << check[0][0] << " ";
	}
	else if (check[0][0] == check[2][0])
	{
		std::cout << check[1][0] << " ";
	}

	if (check[0][1] == check[1][1])
	{
		std::cout << check[2][1] << " ";
	}
	else if (check[1][1] == check[2][1])
	{
		std::cout << check[0][1] << " ";
	}
	else if (check[0][1] == check[2][1])
	{
		std::cout << check[1][1] << " ";
	}

	

	return 0;
}