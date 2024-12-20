#include "InputHandler.h"

#include "dinput.h"

void InputHandler::SetKeys(char* _keys, char* _preKeys)
{
    keys_ = _keys;
    preKeys_ = _preKeys;
}

void InputHandler::AssignKeysMoveLeft()
{
    ICommand* command = new CommandMoveLeft();
    this->pressKeyA_ = command;
    return;
}

void InputHandler::AssignKeysMoveRight()
{
    ICommand* command = new CommandMoveRight();
    this->pressKeyD_ = command;
    return;
}

ICommand* InputHandler::HandleInput()
{
    if (preKeys_[DIK_A] == 0 && keys_[DIK_A] != 0)
    {
        return pressKeyA_;
    }
    if (preKeys_[DIK_D] == 0 && keys_[DIK_D] != 0)
    {
        return pressKeyD_;
    }
    return nullptr;
}
