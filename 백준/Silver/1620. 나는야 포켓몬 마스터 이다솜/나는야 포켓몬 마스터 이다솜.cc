#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
	/*
		도감 수 n
		맞출 수 m

		1 <= n, m <= 100000

		첫글자 대문자 나머지 소문자
		일부는 마지막 문자만 대문자

		문자열 길이 2 ~ 20

		문자열을 입력할 경우 번호 출력
		번호를 입력할 경우 문자열 출력
	*/
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	
	int n, m;
	std::unordered_map<std::string, int> poketmon;

	std::cin >> n >> m;
	std::string* index = new std::string[n];

	for (int i = 0; i < n; i++)
	{
		std::string temp;
		std::cin >> temp;
		poketmon.insert({temp, i});
		index[i] = temp;
	}

	for (int i = 0; i < m; i++)
	{
		std::string temp;
		std::cin >> temp;

		if (atoi(temp.c_str()) == 0)	// 문자열
		{
			std::cout << poketmon[temp] + 1<< "\n";
		}
		else                            // 숫자
		{	
			int num = stoi(temp) - 1;
			std::cout << index[num] << "\n";
		}

	}

	return 0;
}