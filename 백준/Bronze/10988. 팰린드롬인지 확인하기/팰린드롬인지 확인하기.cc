#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::string reverseStr;
	std::string checkStr;

	std::cin >> reverseStr;
	checkStr = reverseStr;

	std::reverse(reverseStr.begin(), reverseStr.end());

	if (reverseStr == checkStr)
		std::cout << true;
	else
		std::cout << false;

	return 0;
}