#include <iostream>
#include <deque>

int main()
{
	/*
		Stack - LIFO
		Queue - FIFO
		Deque - Front, Back

		1. 자료입력 x0
		2. 1번 자료구조에 x0
		3. 2번 자료구조에 x1
		4. x0 을 1번에 넣고 pop하면 x1이 팝
		5. x1을 리턴

		길이 M의 수열 C

		N을 입력받음

		x0을 1번 자료구조에 삽입 1번 자료구조에서 원소를 pop 그때 원소를 xn
		xn 값을 출력

	*/
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, m;
	bool a[100000];
	std::deque<int> d;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		int b;
		std::cin >> b;
		if (a[i] == 0)
		{
			d.push_back(b);
		}
	}

	std::cin >> m;
	for (int i = 0; i < m; i++)
	{
		int c;
		std::cin >> c;
		d.push_front(c);
	
		std::cout << d.back() << " ";
		d.pop_back();
	}

	return 0;
}