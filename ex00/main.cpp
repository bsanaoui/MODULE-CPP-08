#include <iostream>
#include <map>
#include <list>
#include <vector>
#include <algorithm>

#include "easyfind.hpp"

void displayInt(int i)
{
    std::cout << i << std::endl;
}

int main( void )
{
    std::list<int>                      lst1;
    std::vector<int>                    v2(42, 100);

    lst1.push_back(1);
    lst1.push_back(17);
    lst1.push_back(42);

    easyfind(lst1, 17);
    // for_each(lst1.begin(), lst1.end(), displayInt);


    return 0;
}