#pragma once

#include <string>

class Bread
{
public: /// 列挙型
    enum class Size
    {
        Small,
        Medium,
        Large
    };


public: /// メンバ関数
    Bread() = default;
    virtual ~Bread();

    std::string         GetShape()  const { return shape_; };
    std::string         GetTaste()  const { return taste_; };
    std::string         GetState()  const { return state_; };
    Size                GetSize()   const { return size_; };

    virtual void        Bake() = 0;

public: /// static
    static int          GetCount();
    static std::string  GetSizeString(Bread::Size _size);
    static void         PrintInfo(std::string _name, Bread* _bread);


protected: /// メンバ変数
    static int          count_;
    std::string         shape_;
    std::string         taste_;
    Size                size_;

    std::string         state_;
};

