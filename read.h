#pragma once
#include <string>
#include <vector>
#include <set>

namespace reader {

    std::vector<std::string> readLines(const std::string &filename, char end);

    std::vector<std::vector<std::string>> readTable(const std::string &filename, char end);
};