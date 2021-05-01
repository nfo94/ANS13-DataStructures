#include <iostream>
using namespace std;

class User
{
private:
    string name;
    string email;

public:
    User();
    virtual ~User();
};

User::User()
{
    name = "Undefined";
    email = "Undefined";
}