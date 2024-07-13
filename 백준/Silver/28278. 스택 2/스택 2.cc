#include <iostream>
#include <stack>

int main()
{
	/*
		Stack
		Last In First Out

		stack<int> stack;
		stack.push(element);
		stack.pop();
		stack.top();
		stack.size();
		stack.empty();
		swap(stack1, stack2);

		1: 정수 X를 스택에 넣는다. (1 ≤ X ≤ 100,000)
		2: 스택에 정수가 있다면 맨 위의 정수를 빼고 출력한다. 없다면 -1을 대신 출력한다.
		3: 스택에 들어있는 정수의 개수를 출력한다.
		4: 스택이 비어있으면 1, 아니면 0을 출력한다.
		5: 스택에 정수가 있다면 맨 위의 정수를 출력한다. 없다면 -1을 대신 출력한다.

		
	*/

	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	std::cin >> n;

	std::stack<int> stk;

	for (int i = 0; i < n; i++)
	{
		int program;
		std::cin >> program;

		switch (program)
		{
			case 1:	// 1: 정수 X를 스택에 넣는다. (1 ≤ X ≤ 100,000)
			{
				int temp;
				std::cin >> temp;
				stk.push(temp);
				break;
			}
			case 2:	// 2: 스택에 정수가 있다면 맨 위의 정수를 빼고 출력한다. 없다면 -1을 대신 출력한다.
			{
				if (stk.empty() != true)
				{
					std::cout << stk.top() << "\n";
					stk.pop();
				}
				else
					std::cout << -1 << "\n";
				break;
			}	
			case 3:	// 3: 스택에 들어있는 정수의 개수를 출력한다.
			{
				std::cout << stk.size() << "\n";
				break;
			}
			case 4:	// 4: 스택이 비어있으면 1, 아니면 0을 출력한다.
			{
				if (stk.empty())	std::cout << 1 << "\n";
				else 				std::cout << 0 << "\n";
				break;
			}
			case 5:	// 5: 스택에 정수가 있다면 맨 위의 정수를 출력한다. 없다면 -1을 대신 출력한다.
			{
				if (stk.empty() != true)
				{
					std::cout << stk.top() << "\n";
				}
				else
					std::cout << -1 << "\n";
				break;
			}
		}
	}


	return 0;
}