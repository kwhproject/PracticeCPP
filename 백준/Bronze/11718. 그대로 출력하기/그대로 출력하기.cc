#include <iostream>
#include <string>

int main()
{
	std::string s;

	while (true)
	{
		std::getline(std::cin, s);

		if (std::cin.eof())
			break;

		std::cout << s << std::endl;
	}
	

	return 0;
}