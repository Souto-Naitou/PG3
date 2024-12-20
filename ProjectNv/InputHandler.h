#pragma once

#include "Command.h"

class InputHandler
{
public:
    void SetKeys(char* _keys, char* _preKeys);
    void AssignKeysMoveLeft();
    void AssignKeysMoveRight();
    ICommand* HandleInput();


private:
    char* keys_ = nullptr;
    char* preKeys_ = nullptr;
    ICommand* pressKeyA_ = nullptr;
    ICommand* pressKeyD_ = nullptr;
};