// Libraries
#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <numeric>
#include "AddNumbers.h"
#include "Car.h"

// Avoid using "using namespace std"
// https://stackoverflow.com/questions/1452721/why-is-using-namespace-std-considered-bad-practice
// A namespace is a declarative region that provides a scope to the identifiers
//  (the names of types, functions, variables, etc) inside it

// Globally accessible variables
int aGlobalVariable = 0;
double PI = 3.141;

// Main function, where all the execution of the code will begin. It receives
// two arguments, one is an "int" and the other is a "char"
int main(int argc, char **argv)
{
    std::cout << "Hello world" << std::endl;

    bool married = true;
    char gender = 'F';

    // Check the header in the C++ library reference
    // http://www.cplusplus.com/reference/limits/
    std::cout << "Minimum float: " << std::numeric_limits<float>::min() << std::endl;

    // Floating poinst are up to 5 decimals
    float f1 = 1.111111;
    float f2 = 1.11111;

    // If we print like this, it won't show us all the decimals in f1
    std::cout << f1 << std::endl;

    // We can use printf just like C
    printf("Sum = %.7f\n", (f1 + f2));

    // Type inference
    auto whatAmI = true;
    std::cout << whatAmI << std::endl;

    // Declaring strings
    std::string q1 = "Enter a number: ";
    std::string num1, num2;

    // Asking a number, storing it in the declared string
    std::cout << q1;
    std::cin >> num1;
    std::cout << "Enter another number: ";
    std::cin >> num2;

    // Casting the string that came from the standard input to an integer
    int num1ToInt = stoi(num1);
    int num2ToInt = stoi(num2);

    printf("%d + %d = %d\n", num1ToInt, num2ToInt, (num1ToInt + num2ToInt));
    printf("%d - %d = %d\n", num1ToInt, num2ToInt, (num1ToInt - num2ToInt));
    printf("%d * %d = %d\n", num1ToInt, num2ToInt, (num1ToInt * num2ToInt));
    printf("%d / %d = %d\n", num1ToInt, num2ToInt, (num1ToInt / num2ToInt));
    // For some reason if I write "%" instead of "//" it does not show
    printf("%d // %d = %d\n", num1ToInt, num2ToInt, (num1ToInt % num2ToInt));

    // Logical operators
    std::string sAge;
    std::cout << "Enter your age: ";
    std::cin >> sAge;

    // Again, remember to cast the string from input to an int
    int nAge = stoi(sAge);

    if ((nAge >= 1) && (nAge <= 18))
    {
        std::cout << "Important birthday" << std::endl;
    }
    else if ((nAge == 21) || (nAge == 50))
    {
        std::cout << "Also important birthday" << std::endl;
    }
    else if (nAge >= 65)
    {
        std::cout << "Important birthday" << std::endl;
    }
    else
    {
        std::cout << "Not an important birthday" << std::endl;
    }

    bool canIVote = (nAge >= 18) ? true : false;

    if (canIVote)
    {
        std::cout << "You can vote" << std::endl;
    }
    else
    {
        std::cout << "You cannot vote" << std::endl;
    }

    // Arrays
    int arrNums[10] = {1};
    int arrNums2[] = {1, 2, 3};
    int arrNums3[5] = {8, 9};

    std::cout << "1st value: " << arrNums3[0] << std::endl;

    // Changing the value
    arrNums3[0] = 7;
    std::cout << "1st value: " << arrNums3[0] << std::endl;

    // Two-dimensional arrays
    int arrNums4[2][2] = {{{1}, {3}}, {{5}, {7}}};

    std::cout << arrNums4[1][0] << std::endl;

    // Vectors: use them when you don't know the size you need
    std::vector<int> vNums(2);

    vNums[0] = 1;
    vNums[1] = 2;
    vNums.push_back(3);

    std::cout << "Vector size: " << vNums.size() << std::endl;

    // While loop
    int i = 1;
    while (i <= 5)
    {
        std::cout << "Printing in while loop: " << i << std::endl;
        i += 1;
    }

    // For loop
    std::vector<int> forVector(4);
    forVector[0] = 1;
    forVector[1] = 2;
    forVector[2] = 3;
    forVector[3] = 4;
    for (size_t i = 0; i < 4; i++)
    {
        std::cout << "Printing in for loop: " << forVector[i] << std::endl;
    }

    // Do while
    int doWhileI = 0;
    do
    {
        std::cout << "Printing in do while loop" << std::endl;
        doWhileI += 1;
    } while (doWhileI < 3);

    // Functions
    std::cout << "4 + 5 = " << AddNumbers(4, 5) << std::endl;

    // About function overloading:
    //https://www.w3schools.com/cpp/cpp_function_overloading.asp

    // Pointers: is a variable that holds the address of another variable in memory
    std::string food = "Pizza";

    std::cout << food << std::endl;
    // Shows the memory address of the variable
    std::cout << &food << std::endl;
    // Creating a string pointer to save the food variable address
    std::string *foodPointer = &food;
    // The same memory address of food
    std::cout << foodPointer << "\n";
    // Output the value in the memory address stored in the pointer (dereference)
    std::cout << *foodPointer << "\n";

    // Difference between "endl" and "\n"
    // https://www.educative.io/edpresso/what-is-the-difference-between-endl-and-n-in-cpp

    // OOP in C++
    Car carobj1;
    carobj1.brand = "BMW";
    carobj1.model = "X5";
    carobj1.year = 1999;

    std::cout << "Car object 1 brand: " << carobj1.brand << "\n";

    Car carobj2;
    carobj2.brand = "Ford";
    carobj2.model = "Mustang";
    carobj2.year = 1969;

    std::cout << "Car object 2 brand: " << carobj2.brand << "\n";

    // The "int" return of the main function
    return 0;
}
