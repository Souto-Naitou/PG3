#pragma once
#include "Bread.h"

class Shokupan : public Bread
{
public:
    Shokupan();
    ~Shokupan() override;

    static int  GetCount();
    void Bake() override;

private:
    static int count_;
};