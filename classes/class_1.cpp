#include <iostream>
using namespace std;

class Date
{
    // if we don't put "public" it will default to private
public:
    int day;
    int month;
    int year;
};

int main(int argc, char const *argv[])
{
    Date d1;
    d1.day = 11;
    d1.month = 24;
    d1.year = 1994;

    // cout << &d1 << endl;
    cout << d1.day << "/" << d1.month << "/" << d1.year << endl;

    int a;
    // cout << &a << endl;

    return 0;
}
