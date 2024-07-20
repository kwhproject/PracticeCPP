#include <iostream>
#include <queue>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	std::queue<int> q;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::string what;
		std::cin >> what;

		if (what == "push")
		{
			int temp;
			std::cin >> temp;
			q.push(temp);
		}
		else if (what == "pop")
		{
			if (q.empty())
			{
				std::cout << -1 << "\n";
			}
			else
			{
				std::cout << q.front() << "\n";
				q.pop();
			}
		}
		else if (what == "size")
		{
			std::cout << q.size() << "\n";
		}
		else if (what == "empty")
		{
			std::cout << q.empty() << "\n";
		}
		else if (what == "front")
		{
			if (q.empty())
			{
				std::cout << -1 << "\n";
			}
			else
			{
				std::cout << q.front() << "\n";
			}
		}
		else if (what == "back")
		{
			if (q.empty())
			{
				std::cout << -1 << "\n";
			}
			else
			{
				std::cout << q.back() << "\n";
			}
		}
	}

	return 0;
}