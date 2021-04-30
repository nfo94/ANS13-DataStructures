#include <string>
#include <ostream>
#include "Philosopher.h"

Philosopher::Philosopher()
{
    m_name = "John Doe";
    m_number = "000000";
}

Philosopher::Philosopher(string name)
{
    m_name = name;
    m_number = "000000";
}

Philosopher::Philosopher(string name, string number)
{
    m_name = name;
    m_number = number;
}

void Philosopher::setName(string name)
{
    m_name = name;
}

string Philosopher::getName()
{
    return m_name;
}

void Philosopher::setNumber(string number)
{
    m_name = number;
}

string Philosopher::getNumber()
{
    return m_number;
}