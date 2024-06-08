#include <iostream>
#include <string>

void removeDuplicates(std::string& s)
{
	// 반복 문자열 제거 함수
	char prev{};
	for (auto it = s.begin(); it != s.end(); it++)
	{
		if (prev == *it)
		{
			s.erase(it);
			it--;
		}
		else {
			prev = *it;
		}
	}
}

int main()
{
	std::string s;
	std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
	int n, check = 0, count = 0, total = 0;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> s;

		// alphabet check
		for (int j = 0; j < s.size(); j++)
		{
			for (int k = 0; k < 26; k++)
			{
				if (s[j] == alphabet[k])
					check++;
			}
		}
		
		if (check == s.size())
		{
			
			if (s.length() == 1)
				count = 1;
			else if (s.length() == 2)
				count = 1;
			else if (s.length() > 2)
			{
				/*
					check
					01234
					if (s[0] == s[1])
					s[1] = s[2]
					s[2] = s[3]

					s[0] == s[12345]
					break;

					s[0] != s[12345]
					count++;
				*/

				removeDuplicates(s);	// 연속 중복 문자열 제거
				
				/*
					sSave;에 알파벳만 저장
				*/
				std::string sSave;
				for (int i = 0; i < s.size(); i++)
				{			
					for (int j = 0; j < 26; j++)
					{
						if (s[i] == alphabet[j])
							sSave += s[i];
					}
				}

				/*
					j와 k값이 다를때만 문자열 같은지 확인
					같으면 break, 다르면 count = 1;
				*/

				if (sSave.size() == 1)
					count = 1;
				else if (sSave.size() == 2)
					count = 1;
				else if (sSave.size() > 2)
				{
					for (int j = 0; j < sSave.size(); j++)
					{
						if (count == 2)
						{
							count = 0;
							break;
						}
						
						for (int k = 0; k < sSave.size(); k++)
						{
							if (j != k)
							{
								if (sSave[j] == sSave[k])
								{
									count = 2;
									break;
								}
								else if (sSave[j] != sSave[k])
									count = 1;
							}
						}
					}

				}

			}
			
		}
		total += count;
		check = 0;		// 다음 문자열 확인을 위한 초기화
		count = 0;
	}

	std::cout << total;
	

	return 0;
}