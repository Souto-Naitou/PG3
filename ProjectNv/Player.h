#pragma once

#include <Vector2.h>

class Player
{
public:
    void Initialize();
    void Update();
    void Draw() const;

    void MoveRight();
    void MoveLeft();


private:
    Vector2 position_ = {};
    Vector2 velocity_ = {};
};