#include <iostream>

int n;
int operands[11];
int operators[4];
int min = 1000000001;
int max = -1000000001;

void getanswer(int result, int idx)
{
    if (idx == n)
    {
        if (result > max)
            max = result;
        if (result < min)
            min = result;
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        if (operators[i] > 0)
        {
            operators[i]--; // 연산자 하나 사용했으므로 1개 줄여줌
            if (i == 0)
                getanswer(result + operands[idx], idx + 1);
            else if (i == 1)
                getanswer(result - operands[idx], idx + 1);
            else if (i == 2)
                getanswer(result * operands[idx], idx + 1);
            else
                getanswer(result / operands[idx], idx + 1);
            operators[i]++; // 다른 연산자를 사용할 것이므로 아까 줄였던 연산자 개수 늘려줌
        }
    }
    return;
}
int main() 
{
    std::cin >> n;

    for (int i = 0; i < n; i++)
        std::cin >> operands[i];

    for (int i = 0; i < 4; i++)
        std::cin >> operators[i];

    getanswer(operands[0], 1);

    std::cout << max << "\n";
    std::cout << min;

    return 0;
}