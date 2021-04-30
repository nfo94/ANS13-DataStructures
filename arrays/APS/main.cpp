#include <cstdlib>
#include <iostream>
#include "Philosopher.h"
#include "ArrayList.h"
using namespace std;

int main(int argc, char **argv)
{
    ArrayList<Philosopher> list = ArrayList<Philosopher>();

    if (list.isEmpty())
    {
        cout << "Empty list" << endl;
    }

    cout << "The list contains: " << list.size() << " elements" << endl;

    list.add(Philosopher("Angela Davis"));
    list.add(Philosopher("Thomas Hobbes"));
    list.add(Philosopher("Socrates"));
    list.add(Philosopher("Michel Foucault"));

    if (list.isEmpty())
    {
        cout << "Empty list" << endl;
    }
    else
    {
        cout << "The list contains: " << list.size() << " elements" << endl;
    }

    list.print();
    list.remove(3);
    list.print();
    list.print();

    cout << "Socrates index: " << list.indexOf(Philosopher("Socrates")) << endl;

    try
    {
        cout << list.get(4).getName() << endl;
    }
    catch (const char *ex)
    {
        cout << ex << endl;
    }

    try
    {
        cout << list.get(20).getName() << endl;
    }
    catch (const char *ex)
    {
        cout << ex << endl;
    }

    list.clear();
    list.print();
}