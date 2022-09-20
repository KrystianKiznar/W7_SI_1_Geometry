#pragma once
#include "Shape.h"
class Circle :
    public Shape
{
private:
    int r;
    double calcArea();
    double calcPerimeter();
public:
    Circle(std::string name = "kolo\n");
    void toString();
};

