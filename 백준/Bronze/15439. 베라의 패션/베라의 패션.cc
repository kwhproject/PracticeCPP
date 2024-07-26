#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	/*
		상의3벌 하의3벌

		a[?] == b[?] 일때 count 그대로
		a[?] != b[?] 일때 count++
	*/

	int n, count = 0;
	std::cin >> n;

	int* arr1, *arr2;
	arr1 = new int[n];
	arr2 = new int[n];

	for (int i = 0; i < n; i++)
	{
		arr1[i] = i;
		arr2[i] = i;
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr1[i] != arr2[j])
			{
				count++;
			}
		}
	}

	std::cout << count;

	return 0;
}