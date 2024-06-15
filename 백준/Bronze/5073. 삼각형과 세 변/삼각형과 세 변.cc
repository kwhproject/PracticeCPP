#include <iostream>
#include <algorithm>

int main()
{
	int a = 1, b = 1, c = 1;
	int arr[3];
	int max = 0;

	while (a != 0 && b != 0 && c != 0)
	{
		std::cin >> a >> b >> c;
		arr[0] = a;
		arr[1] = b;
		arr[2] = c;

		if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
			break;

		std::sort(arr, arr + 3);

		if (arr[2] >= arr[0] + arr[1])
		{
			std::cout << "Invalid" << std::endl;
		}
		else if (arr[0] == arr[1] && arr[0] == arr[2] && arr[1] == arr[2])
			std::cout << "Equilateral" << std::endl;
		else if (arr[0] == arr[1] && arr[0] != arr[2])
			std::cout << "Isosceles" << std::endl;
		else if (arr[0] == arr[2] && arr[0] != arr[1])
			std::cout << "Isosceles" << std::endl;
		else if (arr[1] == arr[2] && arr[0] != arr[2])
			std::cout << "Isosceles" << std::endl;	
		else
			std::cout << "Scalene" << std::endl;
		

	}

	return 0;
}