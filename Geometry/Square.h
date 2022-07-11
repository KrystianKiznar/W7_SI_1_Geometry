#pragma once
#include "Shape.h"
class Square :
    public Shape
{
private:
    int a;
    double calcArea();
    double calcPerimeter();
public:
    Square(std::string name = "kwa");
    void toString();
};

