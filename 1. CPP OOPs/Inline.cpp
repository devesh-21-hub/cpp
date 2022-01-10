/*
Inline Function: An inline function is one whose code is expanded in line, rather than called.
Below is a function to implement an inline function.
*/

#include <iostream>

class InlineClass
{
    // Private member
    int i;

    // Public members
public:
    int get_i();
    void set_i(int j);
};

inline int InlineClass::get_i()
{
    return i;
}

inline void InlineClass::set_i(int j)
{
    i = j;
}

int main()
{
    InlineClass cl;

    cl.set_i(10);
    std::cout << cl.get_i() << "\n";

    return 0;
}
