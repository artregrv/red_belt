#include "profile.h"

#include <vector>

void fillVector()
{
    LOG_DURATION("fill vector");

    std::vector<int> v(10000000, 0);
}

int main()
{
    fillVector();

    return 0;
}