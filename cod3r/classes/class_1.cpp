#include <iostream>
using namespace std;

class Date
{
    // if we don't put "public" it will default to private
public:
    int day;
    int month;
    int year;

    void printDate()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main(int argc, char const *argv[])
{
    Date d1;
    d1.day = 24;
    d1.month = 11;
    d1.year = 1994;

    // cout << &d1 << endl;
    d1.printDate();

    int a;
    // cout << &a << endl;

    return 0;
}
