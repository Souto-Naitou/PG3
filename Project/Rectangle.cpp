#include "Rectangle.h"

#include <iostream>

Rectangle::Rectangle(int _width, int _height)
{
    width_ = _width;
    height_ = _height;
    size_ = 0;
}

void Rectangle::Size()
{
    size_ = width_ * height_;

    return;
}

void Rectangle::Draw()
{
    std::cout << "Size: " << size_ << std::endl;
    return;
}