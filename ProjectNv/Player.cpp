#include "Player.h"
#include <Novice.h>

void Player::Initialize()
{
}

void Player::Update()
{
    position_.x += velocity_.x;
    position_.y += velocity_.y;

    velocity_ = Vector2();
}

void Player::Draw() const
{
    Novice::DrawBox(
        static_cast<int>(position_.x),
        static_cast<int>(position_.y),
        32,
        32,
        0.0f,
        0xffffffff,
        kFillModeSolid
    );
}

void Player::MoveRight()
{
    velocity_.x = 32.0f;
}

void Player::MoveLeft()
{
    velocity_.x = -32.0f;
}
