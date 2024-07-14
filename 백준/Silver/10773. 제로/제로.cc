#include <iostream>
#include <stack>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int k, answer = 0;
	std::cin >> k;
	std::stack<int> stk;

	for (int i = 0; i < k; i++)
	{
		int temp;
		std::cin >> temp;

		if (temp == 0)
			stk.pop();
		else
			stk.push(temp);
	}

	while (!stk.empty()) 
	{
		answer += stk.top();
		stk.pop();
	}

	std::cout << answer;

	return 0;
}