#include <iostream>
#include <string>

int main()
{
	int check;
	int arr1[6] = { 1, 1, 2, 2, 2, 8 };
	int arr2[6];
	int arr3[6];

	for (int i = 0; i < 6; i++)
	{
		std::cin >> check;
		arr2[i] = check;

		arr3[i] = arr1[i] - arr2[i];
	}

	for (int i = 0; i < 6; i++)
		std::cout << arr3[i] << " ";

	return 0;
}