#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
protected:
    double height;
    double width;

public:
    // The value will remain the same throughout objects
    static int numOfShapes;
    Shape(double length);
    Shape(double height, double width);
    Shape();
    // Deconstructor. Will be called automatically when the object is deleted
    virtual ~Shape();

    void SetHeight(double height);
    double GetHeight();
    void SetWidth(double width);
    double GetWidth();
    static int GetNumOfShapes();
    virtual double Area();
};

#endif /* SHAPE_H */