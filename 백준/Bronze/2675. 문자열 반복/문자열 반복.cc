#include <iostream>
#include <string>

int main()
{
	std::string s, p;
	int t, r;

	/*
		t번 확인 예정
		s 문자열 받아서 각각 r번 반복하여 r로 출력
	*/

	std::cin >> t;

	for (int i = 0; i < t; i++)
	{
		std::cin >> r;
		std::cin >> s;

		for (int j = 0; j < s.size(); j++)
		{
			/*
				p += s[0];
				p += s[0];
				p += s[0];

				p += s[1];
				p += s[1];
				p += s[1];

				p += s[2];
				p += s[2];
				p += s[2];
			*/
			for (int k = 0; k < r; k++)
			{
				p += s[j];

			}
		}
		std::cout << p << std::endl;
		p = "";

	}

	

	return 0;
}