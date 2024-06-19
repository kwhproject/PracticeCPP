#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	/*
		M x N 크기의 보드
		8 x 8로 잘라서 체스판 사용
		WB가 번갈아 나와야함 (가로세로둘다)

		시작점에서 8 x 8 보드 체크 후 가장 적은 숫자 출력
		
	*/
	int n = 0, m = 0, countW = 0, countB = 0;
	std::vector<int> boardCount;
	char board[50][50];

	std::cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cin >> board[i][j];
		}
	}

	/*
		i, j 는 시작점
		k, l 은 보드판
	*/

	for (int i = 0; i < n - 7; i++)
	{
		for (int j = 0; j < m - 7; j++)
		{
			for (int k = i; k < i + 8; k++)
			{
				for (int l = j; l < j + 8; l++)
				{
					if ((k + l) % 2 == 0)
					{
						if (board[k][l] == 'W')
							countW++;
					}
					else
					{
						if (board[k][l] != 'W')
							countW++;
					}
					
					if ((k + l) % 2 == 0)
					{
						if (board[k][l] == 'B')
							countB++;
					}
					else
					{
						if (board[k][l] != 'B')
							countB++;
					}
									
				}
			}

			boardCount.push_back(countW);
			countW = 0;
			boardCount.push_back(countB);
			countB = 0;
		}
	}

	std::sort(boardCount.begin(), boardCount.end());
	std::cout << boardCount.at(0);

	return 0;
}