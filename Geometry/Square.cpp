#include "Square.h"
#include <iostream>
double Square::calcArea()
{
    return a*a;
}

double Square::calcPerimeter()
{
    return 4*a;
}

Square::Square(std::string name)
{
    this->name = name;
    std::cout << "Input the side length: " << std::endl;
    std::cin >> a;
    area = calcArea();
    perimeter = calcPerimeter();
    perimeterFormula = "4*a";
    areaFormula = "a*a";
}

void Square::toString()
{
    std::cout << name << std::endl;
    std::cout << "The a side is: " << a << std::endl;
    std::cout << "The perimeter is: " << perimeter << std::endl;
    std::cout << "The field is: " << area << std::endl;
}
