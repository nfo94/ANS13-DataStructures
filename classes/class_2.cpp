#include <iostream>
using namespace std;

class Product
{
public:
    string name;
    float price;
    float discount;

    void finalPrice()
    {
        int finalPrice = price + ((price * discount) / 100);
        cout << finalPrice << endl;
    }
};

int main(int argc, char const *argv[])
{
    Product p1;
    p1.name = "Notebook";
    p1.price = 6999.99;
    p1.discount = 15.0;
    p1.finalPrice();

    // Direct list initialization
    Product p2{"iPad", 1999.99, 10};

    return 0;
}
