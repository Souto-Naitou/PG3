#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <Windows.h>

typedef void (*PFunc)();

int isOdd = {};
int diceResult = {};

void SetTimeout(PFunc _pre, PFunc _later, int _sec);
void InputPrediction();
void Roll();
void DisplayResult();
void DisplayAnswer();

int main(void)
{
    srand(static_cast<unsigned int>(time(nullptr)));

    SetTimeout(InputPrediction, Roll, 3);

    return 0;
}

void SetTimeout(PFunc _pre, PFunc _later, int _sec)
{
    _pre();
    Sleep(_sec * 1000);
    _later();
}

void InputPrediction()
{
    printf("出目が偶数の場合 0 を入力\n");
    printf("出目が奇数の場合 1 を入力\n");
    printf("> ");
    scanf_s("%d", &isOdd);
    printf("\n");
    printf("予想は%s！ 正解は...\n", isOdd ? "奇数" : "偶数");
}

void Roll()
{
    diceResult = rand() % 6 + 1;
    SetTimeout(DisplayResult, DisplayAnswer, 1);
}

void DisplayResult()
{
    printf("サイコロの出目は「%d」\n", diceResult);
}

void DisplayAnswer()
{
    if (diceResult % 2 == isOdd)
    {
        printf("正解\n");
    }
    else
    {
        printf("不正解\n");
    }
}
