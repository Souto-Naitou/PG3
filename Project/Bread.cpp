#include "Bread.h"
#include <iostream>

int Bread::count_ = 0;

Bread::~Bread()
{
    std::cout << "パンは消えてしまった" << std::endl;
}

int Bread::GetCount()
{
    return count_;
}

std::string Bread::GetSizeString(Bread::Size _size)
{
    if (_size == Bread::Size::Small)
    {
        return "小さい";
    }
    else if (_size == Bread::Size::Medium)
    {
        return "普通";
    }
    else if (_size == Bread::Size::Large)
    {
        return "大きい";
    }

    return "";
}

void Bread::PrintInfo(std::string _name, Bread* _bread)
{
    std::cout << _name << ": " << std::endl;
    std::cout << "\t形状: " << _bread->GetShape() << std::endl;
    std::cout << "\t大きさ: " << Bread::GetSizeString(_bread->GetSize()) << std::endl;
    std::cout << "\t味: " << _bread->GetTaste() << std::endl;
    std::cout << "\t状態: " << _bread->GetState() << std::endl;
}
