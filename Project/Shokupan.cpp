#include "Shokupan.h"
#include <iostream>

int Shokupan::count_ = 0;

Shokupan::Shokupan()
{
    ++Shokupan::count_;
    ++Bread::count_;

    shape_ = "四角い";
    size_ = Size::Medium;
    taste_ = "ほんのりと甘い";
    state_ = "生の食パン";

    return;
}

Shokupan::~Shokupan()
{
    --count_;
    std::cout << "食パンは消えてしまった" << std::endl;

    return;
}

int Shokupan::GetCount()
{
    return count_;
}

void Shokupan::Bake()
{
    state_ = "こんがり焼けている";
}
