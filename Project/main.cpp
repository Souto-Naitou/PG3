#include <iostream>
#include <sstream>
#include <vector>
#include <memory>
#include <algorithm>
#include <regex>

#include "Parser_.h"

int main(void)
{
    std::unique_ptr<Parser> parser = std::make_unique<Parser>();

    parser->Load("text/PG3_2024_03_02.txt");

    auto& parsedData = parser->GetArrays();

    std::sort(parsedData.back().begin(), parsedData.back().end());

    /// 頑張って書いたやつ
    //std::sort(parsedData.back().begin(), parsedData.back().end(), [](const std::string& _l, const std::string& _r) {
    //    std::regex pattern("\\d+?");
    //    std::smatch lMatch;
    //    std::smatch rMatch;

    //    std::string ls = _l;
    //    std::string rs = _r;

    //    while (std::regex_search(ls, lMatch, pattern) && std::regex_search(rs, rMatch, pattern))
    //    {
    //        if (std::stoi(lMatch[0]) == std::stoi(rMatch[0]))
    //        {
    //            ls = lMatch.suffix();
    //            rs = rMatch.suffix();
    //            continue;
    //        }
    //        else return std::stoi(lMatch[0]) < std::stoi(rMatch[0]);
    //    }
    //    return false;
    //});

    for (auto& array : parsedData)
    {
        for (auto& data : array)
        {
            std::cout << data << std::endl;
        }
    }

    return 0;
}