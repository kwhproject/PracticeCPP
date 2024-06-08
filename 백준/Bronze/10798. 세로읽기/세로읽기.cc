#include <iostream>
#include <string>

int main()
{
	char** a;
	int row = 5, col = 15;
	std::string word;

	a = new char* [row];

	for (int i = 0; i < row; i++)
	{
		a[i] = new char[col];
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			a[i][j] = ' ';
		}
	}

	for (int i = 0; i < row; i++)
	{
		std::cin >> word;
		for (int j = 0; j < word.size(); j++)
		{
			a[i][j] = word[j];
		}
	}

	/*
		[0][0] [0][1] etc..
		[1][0] [1][1] etc..

		[0][0] [1][0] [2][0] [3][0] [4][0]etc..
		[0][1] [1][1] [2][1] [3][1] [4][1]etc..
	*/
	for (int j = 0; j < col; j++)
	{
		for (int i = 0; i < row; i++)
		{
			if (a[i][j] == ' ')
				;
			else
				std::cout << a[i][j];
		}
	}

	return 0;
}