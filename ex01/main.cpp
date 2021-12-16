#include <iostream>
#include <map>
#include <list>
#include <vector>
#include <algorithm>

#include "span.hpp"

#define LENGHT 10000

int main( void )
{
    Span sp = Span(LENGHT);
    srand(time(NULL));
    try
    {
        for (int i = 0; i < LENGHT; i++)
            sp.addNumber(rand());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}