#include "Circle.h"
#include<iostream>

double Circle::calcArea()
{
    return 3.14*r*r;
}

double Circle::calcPerimeter()
{
    return 2* 3.14* r;
}

Circle::Circle(std::string name)
{
    this->name = name;
    std::cout << "Input radius: " << std::endl;
    std::cin >> r;
    area = calcArea();
    perimeter = calcPerimeter();
    perimeterFormula = "2 * Pi * r";
    areaFormula = "Pi * r^2";
}

void Circle::toString()
{
    std::cout << name;
    std::cout << "Radius is: " << r << std::endl;
    std::cout << "Field is: " << area << std::endl;
    std::cout << "Perimeter is: " << perimeter << std::endl;
}
