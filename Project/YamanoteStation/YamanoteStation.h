#pragma once

#include <list>

class YamanoteStation
{
public:
    YamanoteStation();
    ~YamanoteStation() = default;

    void ChangeEra(unsigned int _eraYear);

    void Print();

private:
    std::list<const char*> stationNames_;
    unsigned int eraYear_ = 1970u;

private:
    std::list<const char*>::iterator FindStation(const char* _stationName);
};
