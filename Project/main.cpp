#include <iostream>

inline unsigned int CalcurateRecursiveSalary(unsigned int _hourWork)
{
    // 働け (早期リターン)
    if (_hourWork <= 0u) return 0u;

    // 末端
    if (_hourWork <= 1u)
    {
        return 100u;
    }

    // 再起的に実行
    return CalcurateRecursiveSalary(_hourWork - 1) * 2u - 50u;
}

int main(void)
{
    unsigned int hourlyWage = 1072u;

    /// 一般的な給料計算方式
    printf("Normal Salary-Calculate-Type :\n");
    for (unsigned int hourWork = 1u; hourWork <= 8u; ++hourWork)
    {
        
        printf("%2u hour : %5u yen\n", hourWork, hourWork * hourlyWage);
    }

    printf("\n");

    printf("Recursive Salary-Calcurate-Type :\n");
    for (unsigned int hourWork = 1u; hourWork <= 8u; ++hourWork)
    {
        printf("%2u hour : %5u yen\n", hourWork, CalcurateRecursiveSalary(hourWork));
    }

    return 0;
}