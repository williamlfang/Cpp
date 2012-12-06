/**
 * References:
 *   [1] http://www.cprogramming.com/c++11/c++11-nullptr-strongly-typed-enum-class.html
 *   [2] http://en.cppreference.com/w/cpp/types/nullptr_t
 */
#include <cstddef>
#include <iostream>

void func(int n)
{
    std::cout << "func(int n) called" << std::endl;
}

void func(char *s)
{
    std::cout << "func(char *s) called" << std::endl;
}

void func(std::nullptr_t nullp)
{
    std::cout << "func(std::nullptr_t) called" << std::endl;
}

int main()
{
    // This results in the error:
    //     call of overloaded ‘func(NULL)’ is ambiguous
    //func( NULL );

    func( nullptr );
}
