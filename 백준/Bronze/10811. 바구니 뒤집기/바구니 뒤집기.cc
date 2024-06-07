#include <iostream>
#include <algorithm>

int main()
{

	/*
		1, 2, 3, 4, 5, n...
		M번 바구니 순서 역순으로

		1 2 3 4 5
		2 1 3 4 5 (1, 2)
		2 1 4 3 5 (3, 4) -> check
		3 4 1 2 5 (1, 4)
		3 4 1 2 5 (2, 2)

		arr[1] = arr[4]
		arr[2] = arr[3]
		arr[3] = arr[2]
		arr[4] = arr[1]

		arr[1] = arr[3]
		arr[2] = arr[2]
		arr[3] = arr[1]

		arr[1] = arr[5]
		arr[2] = arr[4]
		arr[3] = arr[3]
		arr[4] = arr[2]
		arr[5] = arr[1]
		
		int i = num2 ; i < num1; i--
		arr[i] = arr[j];

	*/
	int n, m, i, j, count;
	int arr[100];
	int save[100];

	std::cin >> n;
	for (int x = 0; x < n; x++)
	{
		arr[x] = x + 1;
	}

	std::cin >> m;
	for (int x = 0; x < m; x++)
	{
		std::cin >> i >> j;

		for (int y = i - 1; y < j; y++)	
		{
			save[y] = arr[y];	// i ~ j 저장
		}

		count = j - i + 1;
		i = i - 1;
		j = j - 1;

		for (int y = 0; y < count; y++)
		{
			arr[i++] = save[j--]; // i와 j에 -1 해야함
			/*
				if(i == 1, j == 4)
				arr[1] == save[4]
				arr[2] == save[3]
				arr[3] == save[2]
				arr[4] == save[1]

			*/
		}
		

	}

	for (int x = 0; x < n; x++)
		std::cout << arr[x] << " ";

	return 0;
}