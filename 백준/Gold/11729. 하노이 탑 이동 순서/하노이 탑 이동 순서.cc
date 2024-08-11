#include <iostream>

/*
	위치 -> 위치   <크기> 

	1 -> 3	<1>
	1 -> 2	<2>
	3 -> 2	<1>
	1 -> 3	<3>
	2 -> 1	<1>
	2 -> 3	<2>
	1 -> 3	<1>
*/

void hanoi(int from, int via, int to, int n) 
{
	if (n == 1) 
	{
		std::cout << from << " " << to << "\n";
	}
	else 
	{
		hanoi(from, to, via, n - 1);
		std::cout << from << " " << to << "\n";
		hanoi(via, from, to, n - 1);
	}
}

void hanoi_count(int n) 
{
	int num = 1;
	while (--n) 
	{
		num = num * 2 + 1;
	}
	std::cout << num << "\n";
}

int main()
{
	int n;
	std::cin >> n;

	hanoi_count(n);
	hanoi(1, 2, 3, n);
	return 0;
}