#include "Circle.h"

#include <iostream>

Circle::Circle(float radius)
{
    radius_ = radius;
    size_ = 0.0f;
}

void Circle::Size()
{
    size_ = 3.1415f * radius_ * radius_;

    return;
}

void Circle::Draw()
{
    std::cout << "Size: " << size_ << std::endl;
    return;
}
