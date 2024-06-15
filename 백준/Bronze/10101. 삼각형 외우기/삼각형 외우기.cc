#include <iostream>

int main()
{
	int n = 0;
	int arr[3];

	for (int i = 0; i < 3; i++)
	{
		std::cin >> n;
		arr[i] = n;
	}

	if (arr[0] + arr[1] + arr[2] != 180)
		std::cout << "Error";
	else
	{
		if (arr[0] == arr[1] && arr[0] != arr[2])
			std::cout << "Isosceles";
		else if (arr[0] == arr[2] && arr[0] != arr[1])
			std::cout << "Isosceles";
		else if (arr[1] == arr[2] && arr[0] != arr[2])
			std::cout << "Isosceles";
		else if (arr[0] == arr[1] && arr[0] == arr[2] && arr[1] == arr[2])
			std::cout << "Equilateral";
		else
			std::cout << "Scalene";
	}

	return 0;
}