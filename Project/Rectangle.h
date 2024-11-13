#pragma once

#include "IShape.h"

class Rectangle : public IShape
{
public:
    Rectangle(int _width, int _height);
    void Size() override;
    void Draw() override;

private:
    int size_;
    int width_;
    int height_;
};