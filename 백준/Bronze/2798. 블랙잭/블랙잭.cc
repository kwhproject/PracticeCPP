#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	/*
		36
		93
		138
		181
		185
		214
		216
		245
		295
		315
		
		모든 숫자 다 체크해보는 방법
		총 10개일때
		i + j + k
		i는 0 ~ 9
		j는 i를 제외한 다른값
		k는 i와 j를 제외한 다른값

	*/
	int n = 0, m = 0;
	int* arr;
	std::vector<int> add;

	std::cin >> n >> m;
	arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				if (j != i)
				{
					if (k != i && k != j)
					{
						if (m >= arr[i] + arr[j] + arr[k])
						{
							add.push_back(arr[i] + arr[j] + arr[k]);
						}
					}
				}
				
			}
		}
	}
	std::sort(add.rbegin(), add.rend());

	std::cout << add.at(1);


	return 0;
}