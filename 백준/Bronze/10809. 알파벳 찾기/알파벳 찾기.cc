#include <iostream>
#include <string>

int main()
{
	std::string s;
	std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
	int alphabetCheck[26];

	for (int i = 0; i < 26; i++)
		alphabetCheck[i] = -1;

	std::cin >> s;
	
	for (int i = 0; i < s.size(); i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (s[i] == alphabet[j])
			{
				if (alphabetCheck[j] == -1)
				{
					alphabetCheck[j] = i;
				}
			}
		}
	}

	for (int i = 0; i < 26; i++)
		std::cout << alphabetCheck[i] << " ";

	return 0;
}