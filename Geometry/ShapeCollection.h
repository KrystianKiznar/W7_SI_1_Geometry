#pragma once
#include <vector>
#include <iostream>
#include "Square.h"
#include "Circle.h"

class ShapeCollection
{
	std::vector<Circle> circles;
	std::vector<Square> squares;
public:
	void addShape(std::string figureName);
	void getShapesVector();
	void getMaxShapeByPerimeter();
	void getMaxShapeByArea();
	void getFormulas();
};

