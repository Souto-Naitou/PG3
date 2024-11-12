#include "Enemy.h"
#include <iostream>

void (Enemy::* Enemy::spStateTable[])() =
{
    &Enemy::State_Aproach,
    &Enemy::State_Attack,
    &Enemy::State_Escape
};

void Enemy::ChangeState()
{
    m_state++;
    if (m_state >= 3)
    {
        m_state = 0;
    }
}

void Enemy::Update()
{
    (this->*spStateTable[m_state])();
}

void Enemy::State_Aproach()
{
    std::cout << "接近中" << std::endl;
}

void Enemy::State_Attack()
{
    std::cout << "射撃中" << std::endl;
}

void Enemy::State_Escape()
{
    std::cout << "離脱中" << std::endl;
}
