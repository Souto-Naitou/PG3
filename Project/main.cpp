#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <functional>

void SetTimeout(std::function<void()> _pre, std::function<void()> _later, int _sec);

int main(void)
{
    srand(static_cast<unsigned int>(time(nullptr)));

    /// 変数
    int isOdd = {};
    int diceResult = {};

    std::function<void()> fxpInputPrediction;
    std::function<void()> fxpRoll;
    std::function<void()> fxpDisplayResult;
    std::function<void()> fxpDisplayAnswer;

    fxpInputPrediction = [&](void)
    {
        printf("出目が偶数の場合 0 を入力\n");
        printf("出目が奇数の場合 1 を入力\n");
        printf("> ");
        scanf_s("%d", &isOdd);
        printf("\n");
        printf("予想は%s！ 正解は...\n", isOdd ? "奇数" : "偶数");
        return;
    };

    fxpRoll = [&](void)
    {
        diceResult = rand() % 6 + 1;
        SetTimeout(fxpDisplayResult, fxpDisplayAnswer, 1);
    };

    fxpDisplayResult = [&](void)
    {
        printf("サイコロの出目は「%d」\n", diceResult);
        return;
    };

    fxpDisplayAnswer = [&](void)
    {
        if (diceResult % 2 == isOdd)
        {
            printf("正解\n");
        }
        else
        {
            printf("不正解\n");
        }
        return;
    };

    // 呼び出し
    SetTimeout(fxpInputPrediction, fxpRoll, 3);

    return 0;
}

void SetTimeout(std::function<void()> _pre, std::function<void()> _later, int _sec)
{
    _pre();
    Sleep(_sec * 1000);
    _later();
}