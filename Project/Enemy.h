#pragma once

class Enemy
{
public:
    void ChangeState();

    void Update();

    void State_Aproach();
    void State_Attack();
    void State_Escape();

private:
    int m_state = 0;
    static void (Enemy::* spStateTable[])();

};