// To avoid creating two header files with the same name
#ifndef CAR_H
#define CAR_H
#include <string>

class Car
{
public:
    std::string brand;
    std::string model;
    int year;
};

#endif /* CAR_H */