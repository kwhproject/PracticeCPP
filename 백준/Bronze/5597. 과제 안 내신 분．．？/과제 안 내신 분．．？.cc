#include <iostream>
#include <algorithm>

int main()
{
	int num;
	int student[30];

	for (int i = 0; i < 30; i++)
	{
		student[i] = i + 1;
	}

	for (int i = 0; i < 28; i++)
	{
		std::cin >> num;

		for (int j = 0; j < 30; j++)
		{
			if (student[j] == num)
				student[j] = 0;
		}
	}

	std::sort(student, student + 30);
	std::cout << student[28] << std::endl;
	std::cout << student[29] << std::endl;

	return 0;
}