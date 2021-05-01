#include <string>
#include <ostream>
#ifndef PHILOSOPHER_H
#define PHILOSOPHER_H
using namespace std;

class Philosopher
{
private:
    string m_name;
    string m_number;

public:
    Philosopher();
    Philosopher(string);
    Philosopher(string, string);
    string getName();
    void setName(string);
    string getNumber();
    void setNumber(string);
};

#endif /* PHILOSOPHER_H */