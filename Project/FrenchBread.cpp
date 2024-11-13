#include "FrenchBread.h"

#include <iostream>

int FrenchBread::count_ = 0;

FrenchBread::FrenchBread()
{
    ++FrenchBread::count_;
    ++Bread::count_;

    shape_ = "細長い";
    size_ = Size::Large;
    taste_ = "塩味が強い";
    state_ = "通常のフランスパン";

    return;
}

FrenchBread::~FrenchBread()
{
    --count_;
    std::cout << "フランスパンは消えてしまった" << std::endl;

    return;
}

int FrenchBread::GetCount()
{
    return count_;
}

void FrenchBread::Bake()
{
    taste_ = "焦げているからか、すこし苦い";
    state_ = "硬すぎる。鈍器。とてもじゃないが食べれない。";
}