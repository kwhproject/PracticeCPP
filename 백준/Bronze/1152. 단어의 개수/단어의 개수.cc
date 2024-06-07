#include <iostream>
#include <string>

int main()
{
	std::string s;
	int check = 0;

	std::getline(std::cin, s);

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ' ')
			check++;
	}
	if (s[0] == ' ')
		check--;

	if (s[s.length() - 1] == ' ')
		check--;

	std::cout << check + 1;
	
	return 0;
}