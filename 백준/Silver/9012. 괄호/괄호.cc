#include <iostream>
#include <string>
#include <stack>

int main()
{
	/*
		1. string이 홀수이면 NO
		2. string의 마지막이 (라면 NO
		3. )가 반복될경우 count++ (가 발견될 때 count--, count가 0보다 작으면 NO
	*/
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::stack<char> stk;
		std::string temp;
		std::cin >> temp;
		
		for (int j = 0; j < temp.size(); j++)
			stk.push(temp[j]);

		if (stk.size() % 2 == 1)
		{
			std::cout << "NO" << "\n";
		}
		else if (stk.top() == '(')
		{
			std::cout << "NO" << "\n";
		}
		else
		{
			int count = 0;
			while (stk.empty() == false)
			{			
				if (stk.top() == ')')
				{
					count++;
					stk.pop();
				}
				else if (stk.top() == '(')
				{
					count--;
					if (count < 0)
					{
						std::cout << "NO" << "\n";
						break;
					}
					stk.pop();
				}
			}
			
			if (stk.empty() && count == 0)
			{
				std::cout << "YES" << "\n";
			}
			else if (count > 0)
			{
				std::cout << "NO" << "\n";
			}
		}
		
	}

	

	return 0;
}