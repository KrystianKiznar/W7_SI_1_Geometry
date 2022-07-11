#pragma once
#include<string>


class Shape
{
protected:
	std::string name;
	double area;
	double perimeter;
	std::string areaFormula;
	std::string perimeterFormula;
	virtual double calcArea() = 0;
	virtual double calcPerimeter() = 0;

public:
	virtual void toString() = 0;
	double getPerimeter();
	double getArea();
	void printPerimeterFormula();
	void printAreaFormula();

};

