/*
When a function is defined inside a class, it is inline by default.
*/

#include <iostream>

class InlineClass
{
    // Private member
    int i;

    // Public members
public:
    void set_i(int j) { i = j; };
    int get_i() { return i; };
};

int main()
{
    InlineClass cl;

    cl.set_i(10);
    std::cout << cl.get_i() << "\n";

    return 0;
}
