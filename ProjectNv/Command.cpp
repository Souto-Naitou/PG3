#include "Command.h"

#include "Player.h"

void CommandMoveRight::Execute(Player& _player)
{
    _player.MoveRight();
}

void CommandMoveLeft::Execute(Player& _player)
{
    _player.MoveLeft();
}
