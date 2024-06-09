#include <iostream>

int main()
{
	int t = 0;
	int cent = 0;
	int quarter = 25, dime = 10, nickel = 5, penny = 1;
	int** save;

	std::cin >> t;
	save = new int* [t];

	for (int i = 0; i < t; i++)
	{
		save[i] = new int[4];
	}

	for (int i = 0; i < t; i++)
	{
		std::cin >> cent;

		save[i][0] = cent / quarter;
		cent = cent % quarter;

		save[i][1] = cent / dime;
		cent = cent % dime;

		save[i][2] = cent / nickel;
		cent = cent % nickel;

		save[i][3] = cent / penny;

	}

	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << save[i][j] << " ";
		}
		std::cout << std::endl;

	}

	return 0;
}