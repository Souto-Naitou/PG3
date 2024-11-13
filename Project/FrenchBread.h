#pragma once

#include "Bread.h"

class FrenchBread : public Bread
{
public:
    FrenchBread();
    ~FrenchBread() override;

    static int  GetCount();
    void Bake() override;

private:
    static int count_;
};