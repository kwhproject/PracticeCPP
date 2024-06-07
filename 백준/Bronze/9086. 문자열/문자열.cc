#include <iostream>
#include <string>

int main()
{
	std::string s[10];
	int t;

	std::cin >> t;

	for (int i = 0; i < t; i++)
	{
		std::cin >> s[i];
	}

	for (int i = 0; i < t; i++)
	{
		std::cout << s[i].at(0) << s[i].at(s[i].length() - 1) << std::endl;
	}

	return 0;
}