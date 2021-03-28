#include "Shape.h"

// The "::" is the blueprint of a class
Shape::Shape(double length)
{
    // The "this" references the object itself
    this->height = length;
    this->width = length;
}

Shape::Shape(double height, double width)
{
    this->height = height;
    this->width = width;
}

// Deconstructor
Shape::~Shape() = default;

// Setter for height
void Shape::SetHeight(double height)
{
    this->height = height;
}

// Getter for height
double Shape::GetHeight()
{
    return height;
}

// Setter for width
void Shape::SetWidth(double width)
{
    this->width = width;
}

// Getter for width
double Shape::GetWidth()
{
    return width;
}

int Shape::GetNumOfShapes()
{
    return numOfShapes;
}

double Shape::Area()
{
    return height * width;
}

int Shape::numOfShapes = 0;