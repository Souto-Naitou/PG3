#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <functional>

#include "Enemy.h"

int main(void)
{
    Enemy* enemy = new Enemy();

    for (int i = 0; i < 10; i++)
    {
        enemy->Update();
        enemy->ChangeState();
        Sleep(1000);
    }

    return 0;
}
