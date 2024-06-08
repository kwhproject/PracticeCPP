#include <iostream>
#include <string>

int main()
{
	std::string s;

	std::cin >> s;

	int total = 0;

	for (int i = 0; i < s.size(); i++)
	{
		if ((s[i] == 'c') && (s[i + 1] == '='))
			total--;
		if ((s[i] == 'c') && (s[i + 1] == '-'))
			total--;
		if ((s[i] == 'd') && (s[i + 1] == 'z') && (s[i + 2] == '='))
			total-= 2;
		if ((s[i] == 'd') && (s[i + 1] == '-'))
			total--;
		if ((s[i] == 'l') && (s[i + 1] == 'j'))
			total--;
		if ((s[i] == 'n') && (s[i + 1] == 'j'))
			total--;
		if ((s[i] == 's') && (s[i + 1] == '='))
			total--;
		if ((s[i] == 'z') && (s[i + 1] == '=') && (s[i - 1] != 'd'))
			total--;
	}
	total += s.size();
	std::cout << total;

	return 0;
}