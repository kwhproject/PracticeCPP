#include <iostream>
#include <string>
#include <string.h>

int count = 0;

int recursion(const char* s, int l, int r) 
{
	count++;
	if (l >= r) return 1;
	else if (s[l] != s[r]) return 0;
	else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s) 
{
	return recursion(s, 0, strlen(s) - 1);
}

int main()
{
	/*
		팰린드롬 여부, recursion함수 호출 횟수
	*/
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	std::cin >> t;

	for (int i = 0; i < t; i++)
	{
		count = 0;
		std::string s;
		std::cin >> s;

		std::cout << isPalindrome(s.c_str()) << " " << count << "\n";

	}

	return 0;
}