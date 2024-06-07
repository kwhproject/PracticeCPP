#include <iostream>

int main()
{
	/*
		과목 갯수 N
		성적 N개 입력

		40 80 60
		1 : 40/80*100 = 50
		2 : 80/80*100 = 100
		3 : 60/80*100 = 75

	*/
	int count;
	float score[1000];
	float n, max = 0.f,  total = 0.f;

	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		std::cin >> n;
		score[i] = n;

		if (score[i] > max)
			max = score[i];
	}

	for (int i = 0; i < count; i++)
	{
		score[i] = score[i] / max * 100;
		total += (float)score[i];
	}

	std::cout << total / (float)count;

	return 0;
}