#include <iostream>

template <typename T>
inline T Min(T _x, T _y)
{
    // 小さい方を返す
    return _x < _y ? _x : _y;
}

template <>
inline char Min(char, char)
{
    printf("数字以外は代入できません\n");
    return {};
}

int main(void)
{
    /// int型
    int iNum0 = 16; int iNum1 = -4; int iResult = {};
    iResult = Min(iNum0, iNum1);
    printf("Min(%d, %d) : %d\n", iNum0, iNum1, iResult);

    /// float型
    float fNum0 = 32.0f; float fNum1 = 64.0f; float fResult = {};
    fResult = Min(fNum0, fNum1);
    printf("Min(%.1f, %.1f) : %.1f\n", fNum0, fNum1, fResult);
    
    /// double型
    double lfNum0 = 4.0; double lfNum1 = -4.0; double lfResult = {};
    lfResult = Min(lfNum0, lfNum1);
    printf("Min(%.1lf, %.1f) : %.1lf\n", lfNum0, lfNum1, lfResult);

    /// char型
    char c0 = 65u; char c1 = 66u; char cResult = {};
    cResult = Min(c0, c1);
    printf("Min(%c, %c) : %c\n", c0, c1, cResult);


    return 0;
}