#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int n, m, answer = 0;
	std::string s[10000];
	std::string check[10000];

	std::cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		std::cin >> s[i];
	}

	for (int i = 0; i < m; i++)
	{
		std::cin >> check[i];
	}

	std::sort(s, s + n); 
	std::sort(check, check + m); 

	for (int i = 0; i < m; i++)
	{
		if (std::binary_search(s, s + n, check[i])) answer++;
	}
	
	std::cout << answer;
	return 0;
}