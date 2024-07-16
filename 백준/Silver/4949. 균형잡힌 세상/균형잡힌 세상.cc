#include <iostream>
#include <string>
#include <stack>

int main()
{
	/*
		모든 왼쪽 소괄호("(")는 오른쪽 소괄호(")")와만 짝을 이뤄야 한다.
		모든 왼쪽 대괄호("[")는 오른쪽 대괄호("]")와만 짝을 이뤄야 한다.
		모든 오른쪽 괄호들은 자신과 짝을 이룰 수 있는 왼쪽 괄호가 존재한다.
		모든 괄호들의 짝은 1:1 매칭만 가능하다. 즉, 괄호 하나가 둘 이상의 괄호와 짝지어지지 않는다.
		짝을 이루는 두 괄호가 있을 때, 그 사이에 있는 문자열도 균형이 잡혀야 한다.
		
		입력의 종료조건으로 맨 마지막에 온점 하나(".")가 들어온다.
	*/
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);


	while (true)
	{
		std::string temp;
		std::getline(std::cin, temp, '.');
		std::cin.ignore();

		if (temp.empty())
		{
			break;
		}

		std::stack<char> stk;
		for (int j = 0; j < temp.size(); j++)
			stk.push(temp[j]);	

		std::stack<char> check;
		while (stk.empty() == false)
		{
			if (stk.top() == ')')
			{
				check.push(stk.top());
				stk.pop();
			}
			else if (stk.top() == '(')
			{
				if (check.empty())	{	break;	}
				else if (check.top() == ')')
				{
					check.pop();
					stk.pop();
				}	
				else	{	break;	}
			}
			// () 

			else if (stk.top() == ']')
			{
				check.push(stk.top());
				stk.pop();
			}
			else if (stk.top() == '[')
			{
				if (check.empty())	{	break;	}
				else if (check.top() == ']')
				{
					check.pop();
					stk.pop();
				}
				else	{	break;	}
			}
			// []

			else
			{
				stk.pop();
			}
		}

		if (stk.empty() && check.empty())
		{
			std::cout << "yes" << "\n";
		}
		else
		{
			std::cout << "no" << "\n";
		}

	}
	

	

	return 0;
}