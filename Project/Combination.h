#pragma once


template <typename T1, typename T2>
class Combination
{
public:
    T1 x;
    T2 y;

    Combination(T1 x, T2 y) : x(x), y(y) {}
    Combination() : x(0), y(0) {}

    // decltypeは 式の型を取得できる
    auto Min() -> decltype(x < y ? x : y)
    {
        return x < y ? x : y;
    }
};