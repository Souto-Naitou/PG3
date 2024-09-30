#include <iostream>

inline unsigned int CalculateRecursiveSalary(unsigned int _hourWork)
{
    // 早期[リターン|退社]
    if (_hourWork <= 0u) return 0u;

    // 末端
    if (_hourWork <= 1u)
    {
        return 100u;
    }

    // 再起的に実行
    return CalculateRecursiveSalary(_hourWork - 1) * 2u - 50u;
}

int main(void)
{
    unsigned int hourlyWage = 1072u;
    unsigned int hourWork = 0u;

    printf("実働時間を入力 > ");
    scanf_s("%u", &hourWork);

    /// 一般的な賃金体系
    printf("Normal Salary-Calculate-Type :\n");
    for (unsigned int i = 1u; i <= hourWork; ++i)
    {
        printf("%2u hour : %5u yen\n", i, i * hourlyWage);
    }

    printf("\n");

    /// 再帰的な賃金体系
    printf("Recursive Salary-Calculate-Type :\n");
    for (unsigned int i = 1u; i <= hourWork; ++i)
    {
        printf("%2u hour : %5u yen\n", i, CalculateRecursiveSalary(i));
    }

    return 0;
}