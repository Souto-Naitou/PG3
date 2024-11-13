#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <functional>

#include "Shokupan.h"
#include "FrenchBread.h"

int main(void)
{
    /// 食パンを作成
    std::cout << "[食パンを作成]" << std::endl;
    std::endl(std::cout);

    Shokupan* shokupan1 = new Shokupan();
    Shokupan* shokupan2 = new Shokupan();

    // 食パンの形状、大きさ、味を表示
    Bread::PrintInfo("食パン1", shokupan1);
    Bread::PrintInfo("食パン2", shokupan2);
    std::endl(std::cout);

    /// 食パン1を焼く
    std::cout << "[食パン1を焼く]" << std::endl;
    shokupan1->Bake();
    std::endl(std::cout);

    /// 食パンの状態を表示
    Bread::PrintInfo("食パン1", shokupan1);
    Bread::PrintInfo("食パン2", shokupan2);
    std::endl(std::cout);
    std::endl(std::cout);



    /// フランスパンを作成
    std::cout << "[フランスパンを作成]" << std::endl;
    std::endl(std::cout);

    FrenchBread* frenchBread1 = new FrenchBread();
    FrenchBread* frenchBread2 = new FrenchBread();
    // フランスパンの形状、大きさ、味を表示
    Bread::PrintInfo("フランスパン1", frenchBread1);
    Bread::PrintInfo("フランスパン2", frenchBread2);
    std::endl(std::cout);

    /// フランスパン1を焼く
    std::cout << "[フランスパン1を焼く]" << std::endl;
    frenchBread1->Bake();
    std::endl(std::cout);

    /// フランスパン1の状態を表示
    Bread::PrintInfo("フランスパン1", frenchBread1);
    Bread::PrintInfo("フランスパン2", frenchBread2);
    std::endl(std::cout);

    system("pause");


    return 0;
}

