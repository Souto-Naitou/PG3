#pragma once

#include <string>
#include <sstream>
#include <vector>
#include <list>

class Parser
{
public:
    void Load(const std::string& _path);

public: /// Getter
    auto& GetArrays() { return arrays_; }

private:
    void Parse();
    bool ParseArray(std::string _line);

private:
    std::stringstream fileBuffer_;
    std::list<std::vector<std::string>> arrays_;
};