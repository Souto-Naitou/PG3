#pragma once

class Player;

class ICommand
{
public:
    virtual void Execute(Player& _player) = 0;
    virtual ~ICommand() = default;
};

class CommandMoveLeft : public ICommand
{
public:
    void Execute(Player& _player) override;
};

class CommandMoveRight : public ICommand
{
public:
    void Execute(Player& _player) override;
};