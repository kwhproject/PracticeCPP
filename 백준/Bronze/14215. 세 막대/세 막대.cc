#include <iostream>
#include <algorithm>

int main()
{
	int a = 1, b = 1, c = 1;
	int arr[3];

	std::cin >> a >> b >> c;
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;

	std::sort(arr, arr + 3);

	if (arr[2] >= arr[0] + arr[1])
	{
		arr[2] = arr[0] + arr[1] - 1;
		std::cout << arr[0] + arr[1] + arr[2] << std::endl;
	}
	else
		std::cout << arr[0] + arr[1] + arr[2] << std::endl;

	return 0;
}