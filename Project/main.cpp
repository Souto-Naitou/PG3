#include <iostream>

#include "Circle.h"
#include "Rectangle.h"

int main(void)
{
    Circle circle(5);
    circle.Size();
    circle.Draw();

    Rectangle rectangle(5, 10);
    rectangle.Size();
    rectangle.Draw();

    return 0;
}

