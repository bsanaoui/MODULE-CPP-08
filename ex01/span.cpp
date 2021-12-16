#include "span.hpp"

void    sort(int *arr, int n);

   // ----------- Constructors & Destructor ------------- //
Span::Span( unsigned int N ) : _capacity(N), _array(new int[N]), _size(0)
{}

Span::~Span()
{
    delete [] _array;
}

    // ----------------- Member Functions ---------------- //
void    Span::addNumber( int nb )
{
    if (this->_size == this->_capacity)
        throw NoSpaceLeft();
    this->_array[this->_size] = nb;
    this->_size++;
}

int     Span::shortestSpan()
{
    if (this->_size <= 1)
        throw NotEnoughNumber();
    sort(this->_array, this->_size);

    int shortspan = this->_array[1] - this->_array[0];
    for ( int i = 1; i < this->_size - 1; i++ )
        if ((this->_array[i + 1] - this->_array[i]) < shortspan)
            shortspan = this->_array[i + 1] - this->_array[i];
    return (shortspan);
}

int     Span::longestSpan()
{
    if (this->_size <= 1)
        throw NotEnoughNumber();
    sort(this->_array, this->_size);
    return (this->_array[this->_size - 1] - this->_array[0]);
}
    // -------------------- Function OrClass ------------- //
void    sort(int *arr, int n)
{
    int i, j, tmp;
    for ( i = 0; i < n-1; i++ )
        for ( j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
}

    // ------------------- Class Exception --------------- //
const char *    Span::NotEnoughNumber::what() const throw()
{
    return ("Exception: There is no span to find !");
}

const char *    Span::NoSpaceLeft::what() const throw()
{
    return ("Exception: No space left !");
}