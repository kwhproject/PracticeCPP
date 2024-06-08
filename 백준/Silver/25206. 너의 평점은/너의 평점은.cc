#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

int main()
{
	struct Info
	{
		std::string name;
		double score;
		std::string grade;
		double gradeScore;
	};

	std::vector<Info> v[20];
	double scoreSum = 0.f;
	double scoreMulGradeSum = 0.f;
	// scoreMulGradeSum / scoreSum

	for (int i = 0; i < 20; i++)
	{
		// 과목명, 학점, 등급 입력
		Info save;
		
		std::cin >> save.name;
		std::cin >> save.score;
		std::cin >> save.grade;

		v->push_back(save);
	}

	for (int i = 0; i < 20; i++)
	{
		//if ((v->at(i).grade != "P") && (v->at(i).grade != "F"))
		if (v->at(i).grade != "P")
		{
			// 등급을 double 값으로 변경 후 gradeScore에 값 저장
			if (v->at(i).grade == "A+")			v->at(i).gradeScore = 4.5f;
			else if (v->at(i).grade == "A0")	v->at(i).gradeScore = 4.0f;
			else if (v->at(i).grade == "B+")	v->at(i).gradeScore = 3.5f;
			else if (v->at(i).grade == "B0")	v->at(i).gradeScore = 3.0f;
			else if (v->at(i).grade == "C+")	v->at(i).gradeScore = 2.5f;
			else if (v->at(i).grade == "C0")	v->at(i).gradeScore = 2.0f;
			else if (v->at(i).grade == "D+")	v->at(i).gradeScore = 1.5f;
			else if (v->at(i).grade == "D0")	v->at(i).gradeScore = 1.0f;
			else if (v->at(i).grade == "F")		v->at(i).gradeScore = 0.0f;

			scoreSum += v->at(i).score;
			scoreMulGradeSum += v->at(i).score * v->at(i).gradeScore;
		}
	}
	if (scoreSum == 0.f)
		std::cout << std::fixed << std::setprecision(6) << 0.f;
	else
		std::cout << std::fixed << std::setprecision(6) << scoreMulGradeSum / scoreSum;

	return 0;
}