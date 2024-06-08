#include <iostream>

int main()
{
	/*
		가로 세로 100	도화지
		가로 세로 10		색종이
		색종이가 붙은 영역의 넓이 구하기

		1. 색종이의 수 입력받기
		2. 색종이를 붙인 위치 받기
		-> 색종이의 왼쪽 변과 도화지의 왼쪽 변 사이의 거리 = 색종이의 열 값 a[][ㅁ]
		-> 색종이의 아랫 변과 도화지의 아랫 변 사이의 거리 = 색종이의 행 값 a[ㅁ][]
		
		기존 값은 0, 채워질 경우 100
	*/
	int** a;
	int row = 0, col = 0, num = 0, count = 0;

	a = new int* [100];

	for (int i = 0; i < 100; i++)
	{
		a[i] = new int[100];
	}

	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			a[i][j] = 0;
		}
	}

	std::cin >> num;
	for (int i = 0; i < num; i++)
	{
		std::cin >> col >> row;

		for (int j = row; j < row + 10; j++)
		{
			for (int k = col; k < col + 10; k++)
			{
				a[j][k] = 100;
			}
		}
	}

	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (a[i][j] == 100)
				count++;
		}
	}
	std::cout << count;

	for (int i = 0; i < 100; i++)
		delete[] a[i];
	delete[] a;

	return 0;
}