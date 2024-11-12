#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <functional>

#include "Combination.h"

int main(void)
{
    /// それぞれの型で2つの変数を作成
    int     iNum0 = 32;
    int     iNum1 = 64;

    float   fNum0 = -64.0f;
    float   fNum1 = 128.0f;

    double  dNum0 = -128.0;
    double  dNum1 = -16.0;


    /// 各変数を組み合わせたインスタンスを作成
    Combination<int,    int>*       iCombi  = new Combination(iNum0, iNum1);
    Combination<float,  float>*     fCombi  = new Combination(fNum0, fNum1);
    Combination<double, double>*    dCombi  = new Combination(dNum0, dNum1);

    Combination<int,    float>*     ifCombi = new Combination(iNum0, fNum0);
    Combination<float,  double>*    fdCombi = new Combination(fNum0, dNum0);
    Combination<int,    double>*    idCombi = new Combination(iNum0, dNum0);


    /// 全インスタンスの最小値を表示
    std::cout << "[" << iCombi->x << ":" << iCombi->y << "]->Min() : " << iCombi->Min() << std::endl;
    std::cout << "[" << fCombi->x << ":" << fCombi->y << "]->Min() : " << fCombi->Min() << std::endl;
    std::cout << "[" << dCombi->x << ":" << dCombi->y << "]->Min() : " << dCombi->Min() << std::endl;
    std::cout << "[" << ifCombi->x << ":" << ifCombi->y << "]->Min() : " << ifCombi->Min() << std::endl;
    std::cout << "[" << fdCombi->x << ":" << fdCombi->y << "]->Min() : " << fdCombi->Min() << std::endl;
    std::cout << "[" << idCombi->x << ":" << idCombi->y << "]->Min() : " << idCombi->Min() << std::endl;


    return 0;
}
