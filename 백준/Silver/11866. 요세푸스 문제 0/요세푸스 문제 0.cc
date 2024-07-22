#include <iostream>
#include <queue>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::queue<int> q;
	int n, k, count;
	std::cin >> n >> k;

	for (int i = 1; i <= n; i++)
	{
		q.push(i);
	}

	std::cout << "<";
	while (!q.empty())
	{
		for (int i = 0; i < k - 1; i++)
		{
			q.push(q.front());
			q.pop();
		}
		
		std::cout << q.front();
		q.pop();				

		if (q.empty())
			break;

		std::cout << ", ";	
	}
	std::cout << ">";

	return 0;
}