#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
	/*
		s[0]s[1]s[2]s[3]
		s[0]s[1]s[2], s[1]s[2]s[3]
		s[0]s[1], s[1]s[2], s[2]s[3]
		s[0], s[1], s[2], s[3]	
	*/
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::string s;
	std::unordered_map<std::string, bool> check;

	std::cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		for (int j = s.size(); j > 0; j--)
		{
			check.insert({s.substr(i, j), true});
		}
	}

	std::cout << check.size();

	return 0;
}