#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    cout << a << "\t" << &a << endl;

    string name = "Paul";
    cout << name << "\t" << &name << endl;

    int x = 7;
    // We don't use "= &x" because at compile time instances of xRef are replaced
    // with the address of "x"
    int &xRef = x;
    cout << x << "\t" << &x << endl;

    return 0;
}