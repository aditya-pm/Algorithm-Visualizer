#pragma once
#include <string>
#include <vector>

struct Step {
    std::vector<int> array;

    int highlight1 = -1;
    int highlight2 = -1;

    std::string description;
};