#include <iostream>

int result[9] = { 0 };
bool check[9] = { 0 };

void dfs(int depth, int n, int m)
{
	if (depth == m)
	{
		for (int i = 0; i < m; i++)
			std::cout << result[i] << " ";
		std::cout << "\n";
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			if (check[i] == 0)
			{
				result[depth] = i;
				//check[i] = true;
				dfs(depth + 1, n, m);
				check[i] = false;
			}
		}
	}
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, m;	
	std::cin >> n >> m;
	
	dfs(0, n, m);

	return 0;
}