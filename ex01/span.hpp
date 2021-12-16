#ifndef __SPAN_HPP__
#define __SPAN_HPP__

#include <iostream>

class Span
{
private:
    /* data */
    int             *_array;
    unsigned int    _capacity;
    unsigned int    _size;

public:
    // ----------- Constructors & Destructor ------------- //
    Span( unsigned int N );
    ~Span();

    // ----------------- Member Functions ---------------- //
    void    addNumber( int nb );
    int     shortestSpan();
    int     longestSpan();

    // ------------------- Class Exception --------------- //
    class NotEnoughNumber : public std::exception
    {
        const char * what () const throw();
    };

    class NoSpaceLeft : public std::exception
    {
        const char * what () const throw();
    };
};




#endif