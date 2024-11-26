#include "Parser_.h"
#include <fstream>
#include <iostream>
#include <regex>

void Parser::Load(const std::string& _path)
{
    std::ifstream file(_path);
    if (!file.is_open())
    {
        std::cerr << "Failed to open file: " << _path << std::endl;
        return;
    }

    fileBuffer_ = {};
    fileBuffer_ << file.rdbuf();
    file.close();

    Parse();
}

void Parser::Parse()
{
    std::string line;
    while (std::getline(fileBuffer_, line))
    {
        if (ParseArray(line)) continue;
    }
}

bool Parser::ParseArray(std::string _line)
{
    bool isMatch = false;

    /// [] で囲まれた文字列を抽出
    std::regex pattern("\\[(.*?)\\]");
    std::smatch match;

    if (std::regex_search(_line, match, pattern))
    {
        arrays_.push_back({});
        std::string matchStr = match[1];

        /// "" で囲まれた文字列を抽出
        pattern = std::regex("\\\"(.*?)\\\"");

        while (std::regex_search(matchStr, match, pattern))
        {
            arrays_.back().push_back(match[1]);
            matchStr = match.suffix();
            isMatch = true;
        }
    }


    return isMatch;
}
