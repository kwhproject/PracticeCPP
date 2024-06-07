#include <iostream>
#include <algorithm>
#include <string>

int main()
{
	std::string wordStr;
	std::string alphabetStr = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int alphabet[26];
	int order, max = 0;

	for (int i = 0; i < 26; i++)
	{
		alphabet[i] = 0;
	}

	std::cin >> wordStr;

	for (int i = 0; i < wordStr.size(); i++)
	{
		if ((wordStr[i] == 'a') || (wordStr[i] == 'A'))			alphabet[0]++;
		else if ((wordStr[i] == 'b') || (wordStr[i] == 'B'))	alphabet[1]++;
		else if ((wordStr[i] == 'c') || (wordStr[i] == 'C'))	alphabet[2]++;
		else if ((wordStr[i] == 'd') || (wordStr[i] == 'D'))	alphabet[3]++;
		else if ((wordStr[i] == 'e') || (wordStr[i] == 'E'))	alphabet[4]++;
		else if ((wordStr[i] == 'f') || (wordStr[i] == 'F'))	alphabet[5]++;
		else if ((wordStr[i] == 'g') || (wordStr[i] == 'G'))	alphabet[6]++;
		else if ((wordStr[i] == 'h') || (wordStr[i] == 'H'))	alphabet[7]++;
		else if ((wordStr[i] == 'i') || (wordStr[i] == 'I'))	alphabet[8]++;
		else if ((wordStr[i] == 'j') || (wordStr[i] == 'J'))	alphabet[9]++;
		else if ((wordStr[i] == 'k') || (wordStr[i] == 'K'))	alphabet[10]++;
		else if ((wordStr[i] == 'l') || (wordStr[i] == 'L'))	alphabet[11]++;
		else if ((wordStr[i] == 'm') || (wordStr[i] == 'M'))	alphabet[12]++;
		else if ((wordStr[i] == 'n') || (wordStr[i] == 'N'))	alphabet[13]++;
		else if ((wordStr[i] == 'o') || (wordStr[i] == 'O'))	alphabet[14]++;
		else if ((wordStr[i] == 'p') || (wordStr[i] == 'P'))	alphabet[15]++;
		else if ((wordStr[i] == 'q') || (wordStr[i] == 'Q'))	alphabet[16]++;
		else if ((wordStr[i] == 'r') || (wordStr[i] == 'R'))	alphabet[17]++;
		else if ((wordStr[i] == 's') || (wordStr[i] == 'S'))	alphabet[18]++;
		else if ((wordStr[i] == 't') || (wordStr[i] == 'T'))	alphabet[19]++;
		else if ((wordStr[i] == 'u') || (wordStr[i] == 'U'))	alphabet[20]++;
		else if ((wordStr[i] == 'v') || (wordStr[i] == 'V'))	alphabet[21]++;
		else if ((wordStr[i] == 'w') || (wordStr[i] == 'W'))	alphabet[22]++;
		else if ((wordStr[i] == 'x') || (wordStr[i] == 'X'))	alphabet[23]++;
		else if ((wordStr[i] == 'y') || (wordStr[i] == 'Y'))	alphabet[24]++;
		else if ((wordStr[i] == 'z') || (wordStr[i] == 'Z'))	alphabet[25]++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (max < alphabet[i])
		{
			max = alphabet[i];
			order = i;
		}
	}

	std::sort(alphabet, alphabet + 26);

	if (alphabet[24] == alphabet[25])
		std::cout << "?";
	else if (alphabet[24] != alphabet[25])
		std::cout << alphabetStr[order];

	return 0;
}