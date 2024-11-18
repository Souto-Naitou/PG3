#include <iostream>
#include <sstream>

#include <string>
#include <list>
#include "YamanoteStation/YamanoteStation.h"


int main(void)
{
    YamanoteStation* pYamanoteSta = new YamanoteStation();

    pYamanoteSta->ChangeEra(1970u);

    while (true)
    {
        pYamanoteSta->Print();
        std::endl(std::cout);

        unsigned int inputYear = 1970u;
        std::cout << "表示したい年数を入力してください" << std::endl;
        std::cout << "終了する場合は0を入力してください\n> ";
        std::cin >> inputYear;

        if (inputYear == 0u) break;

        system("cls");

        pYamanoteSta->ChangeEra(inputYear);
    }

    return 0;
}