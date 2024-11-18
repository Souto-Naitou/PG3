#include "YamanoteStation.h"
#include <iostream>


YamanoteStation::YamanoteStation()
{
    // 山手線の駅名をリストに追加
    stationNames_.push_back("Tokyo");
    stationNames_.push_back("Kanda");
    stationNames_.push_back("Akihabara");
    stationNames_.push_back("Okachimachi");
    stationNames_.push_back("Ueno");
    stationNames_.push_back("Uguisudani");
    stationNames_.push_back("Nippori");
    //stationNames.push_back("Nishi-Nippori");
    stationNames_.push_back("Tabata");
    stationNames_.push_back("Komagome");
    stationNames_.push_back("Sugamo");
    stationNames_.push_back("Otsuka");
    stationNames_.push_back("Ikebukuro");
    stationNames_.push_back("Mejiro");
    stationNames_.push_back("Takadanobaba");
    stationNames_.push_back("Shin-Okubo");
    stationNames_.push_back("Shinjuku");
    stationNames_.push_back("Yoyogi");
    stationNames_.push_back("Harajuku");
    stationNames_.push_back("Shibuya");
    stationNames_.push_back("Ebisu");
    stationNames_.push_back("Meguro");
    stationNames_.push_back("Gotanda");
    stationNames_.push_back("Osaki");
    stationNames_.push_back("Shinagawa");
    //stationNames.push_back("Takanawa Gateway");
    stationNames_.push_back("Tamachi");
    stationNames_.push_back("Hamamatsucho");
    stationNames_.push_back("Shimbashi");
    stationNames_.push_back("Yurakucho");
}


void YamanoteStation::ChangeEra(unsigned int _eraYear)
{
    eraYear_ = _eraYear;


    if (_eraYear < 1971u)
    {
        // 西日暮里があったら削除
        stationNames_.remove_if([](const char* _stationName)
        {
            if (_stationName == "Nishi-Nippori")
                return true;
            return false;
        });
    }
    else if (_eraYear >= 1971u)
    {
        // 西日暮里がなかったら追加
        if (FindStation("Nishi-Nippori") == stationNames_.end())
            stationNames_.insert(FindStation("Nippori"), "Nishi-Nippori");
    }


    if (_eraYear < 2020u)
    {
        // 高輪ゲートウェイがあったら削除
        stationNames_.remove_if([](const char* _stationName)
        {
            if (_stationName == "Takanawa Gateway")
                return true;
            return false;
        });
    }
    else if (_eraYear >= 2020u)
    {
        // 高輪ゲートウェイがなかったら追加
        if (FindStation("Takanawa Gateway") == stationNames_.end())
            stationNames_.insert(FindStation("Shinagawa"), "Takanawa Gateway");
    }
}


void YamanoteStation::Print()
{
    std::cout << eraYear_ << "年の山手線の駅名" << std::endl;
    for (const auto& stationName : stationNames_)
    {
        std::cout << '\t' << stationName << std::endl;
    }
}


std::list<const char*>::iterator YamanoteStation::FindStation(const char* _stationName)
{
    for (auto it = stationNames_.begin(); it != stationNames_.end(); ++it)
    {
        if (*it == _stationName)
            return it;
    }
    return stationNames_.end();
}
