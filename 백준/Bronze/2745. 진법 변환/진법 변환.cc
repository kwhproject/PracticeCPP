#include <iostream>
#include <string>

int main()
{
	std::string n;
	int b = 0, sum = 0;

	std::cin >> n >> b;

	for (int i = 0; i < n.size(); i++)
	{
		if (n[i] >= '0' && n[i] <= '9') 
		{	
			sum = sum * b + (n[i] - 48);
		}
		else
			sum = sum * b + (n[i] - 65 + 10);
	}

	std::cout << sum;

	return 0;
}