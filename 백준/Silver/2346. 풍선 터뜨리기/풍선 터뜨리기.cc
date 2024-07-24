#include <iostream>
#include <deque>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	/*
		1 ~ n 풍선

		i-1, i, i+1
		n, 1, 2
		원형으로 있음

		풍선 안에 종이 -n <= ? <= n

		제일 처음 1번종이, 양수 +, 음수 -

	*/
	int n;
	std::deque<std::pair<int, int>> d;
	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		int temp;
		std::cin >> temp;
		d.push_back({ i, temp });
	}
	int order = d.front().second;
	std::cout << 1;
	d.pop_front();
	
	while (!d.empty())
	{
		/*
			1	2	3	4	5
			3	2	1	-3	-1

			4	5	2	3	
			-3	-2	1	1

			2	3	5
			2	1	-1

		*/
		if (order > 0)
		{
			for (int i = 0; i < order - 1; i++)
			{
				d.push_back(d.front());
				d.pop_front();
			}
			order = d.front().second;
			std::cout << " " << d.front().first;
			d.pop_front();
		}
		else
		{
			order = order * -1;
			for (int i = 0; i < order - 1; i++)
			{
				d.push_front(d.back());
				d.pop_back();
			}
			order = d.back().second;
			std::cout << " " << d.back().first;
			d.pop_back();
		}

	}

	return 0;
}