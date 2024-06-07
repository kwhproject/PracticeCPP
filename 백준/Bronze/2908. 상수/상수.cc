#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::string a1, b1;
	int a, b;

	std::cin >> a1 >> b1;

	reverse(a1.begin(), a1.end());
	reverse(b1.begin(), b1.end());

	a = stoi(a1);
	b = stoi(b1);
	
	if (a > b)
		std::cout << a;
	else
		std::cout << b;
	
	
	return 0;
}