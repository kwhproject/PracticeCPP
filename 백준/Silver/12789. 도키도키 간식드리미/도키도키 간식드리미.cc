#include <iostream>
#include <stack>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, order = 1;
	std::stack<int> stk;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		int temp;
		std::cin >> temp;

		if (order == temp)
		{
			order++;
		}
		else if (order != temp)
		{
			stk.push(temp);
		}

		while (!stk.empty() && order == stk.top())
		{
			stk.pop();
			order++;
		}
		
	}

	if (stk.empty())
	{
		std::cout << "Nice" << "\n";
	}
	else
	{
		std::cout << "Sad" << "\n";
	}

	return 0;
}