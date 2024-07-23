#include <iostream>
#include <deque>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, what;
	std::deque<int> d;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> what;
		int temp;

		switch (what)
		{
		case 1: 
			std::cin >> temp;	d.push_front(temp);	break;
		case 2:
			std::cin >> temp;	d.push_back(temp);	break;
		case 3:
			if (d.empty())	{	std::cout << -1 << "\n";	}
			else {	std::cout << d.front() << "\n";	d.pop_front();	}
			break;
		case 4:
			if (d.empty()) {	std::cout << -1 << "\n";	}
			else {	std::cout << d.back() << "\n";	d.pop_back();	}
			break;
		case 5:
			std::cout << d.size() << "\n";
			break;
		case 6:
			std::cout << d.empty() << "\n";
			break;
		case 7:
			if (d.empty()) { std::cout << -1 << "\n"; }
			else { std::cout << d.front() << "\n";	}
			break;
		case 8:
			if (d.empty()) { std::cout << -1 << "\n"; }
			else { std::cout << d.back() << "\n"; }
			break;
		}
	}


	return 0;
}