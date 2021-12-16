#ifndef __EASYFIND__
#define __EASYFIND__

// ----------------- Easyfind -------------- //
template <class T>
void   easyfind( T t,  int nb)
{
    if ( std::find(t.begin(), t.end(), nb) != t.end())
        std::cout << "The number: " << nb << " is Found" << std::endl;
    else
        std::cerr << "Not Found !!" << std::endl;
}


#endif