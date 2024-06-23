#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	/*
		lower_bound(시작값, 종료값, 찾는 값)	<->	cf) upper_bound
		찾는 값보다 같거나 큰 값이 배열 몇 번째에서 처음 등장 하는지 리턴
		조건 : 오름차순 정렬 되어있어야함

		lower_bound의 반환형은 Iterator 이므로 
		실제로 몇 번째 인덱스인지 알고 싶다면, 
		lower_bound 값에서 배열 첫 번째 주소를 가리키는 배열의 이름을 뺀다

		갯수 = lower bound(1.begin(), 1.end(), 2[i]) - 1.begin()

		원본	:	2 4 -10 4 -9
		정렬	:	-10 -9 2 4
		압축	:	2 3 0 3 1

	*/
	int n = 0;
	std::cin >> n;

	std::vector<int> check1;	// 정렬, 중복제거
	std::vector<int> check2;	// 원본

	for (int i = 0; i < n; i++)
	{
		int temp;
		std::cin >> temp;

		check1.push_back(temp);
		check2.push_back(temp);
	}

	std::sort(check1.begin(), check1.end());
	check1.erase(std::unique(check1.begin(), check1.end()), check1.end());

	for (int i = 0; i < n; i++)
	{
		std::cout << std::lower_bound(check1.begin(), check1.end(), check2[i]) - check1.begin() << " ";
	}

	
	return 0;
}