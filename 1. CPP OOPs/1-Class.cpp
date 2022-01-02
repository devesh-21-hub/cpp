#include <bits/stdc++.h>
using namespace std;

class Quadratic
{
    int a, b, c;

public:
    Quadratic(int, int, int);
    ~Quadratic();
    void set_num(int, int, int);
    void get_num();
    Quadratic add(Quadratic, Quadratic);
};

Quadratic ::Quadratic(int x = 0, int y = 0, int z = 0)
{
    a = x;
    b = y;
    c = z;
}

Quadratic ::~Quadratic()
{
    cout << "Object destructed\n";
}

Quadratic Quadratic ::add(Quadratic quad1, Quadratic quad2)
{
    Quadratic temp;
    temp.a = quad1.a + quad2.a;
    temp.b = quad1.b + quad2.b;
    temp.c = quad1.c + quad2.c;

    return (temp);
}

void Quadratic ::set_num(int x, int y, int z)
{
    a = x;
    b = y;
    c = z;
}

void Quadratic ::get_num()
{
    cout << a << "x^2 + " << b << "x + " << c << "\n";
}

int main()
{

    Quadratic C1, C2, C3;

    C1.set_num(8, 6, 3);
    C2.set_num(8, 6, 5);
    C3 = C3.add(C1, C2);

    C3.get_num();

    return 0;
}
