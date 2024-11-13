#pragma once

#include "IShape.h"

class Circle : public IShape
{
public:
    Circle(float radius);
    void Size() override;
    void Draw() override;

private:
    float size_;
    float radius_;
};