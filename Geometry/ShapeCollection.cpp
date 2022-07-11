#include "ShapeCollection.h"
#include<vector>

void ShapeCollection::addShape(std::string figureName)
{
	if (figureName == "circle") {
		circles.push_back(Circle());
	}
	else if (figureName == "square") {
		squares.push_back(Square());
	}
	else
		std::cout << "It's error, my friend!" << std::endl;
}

void ShapeCollection::getShapesVector()
{
	std::cout << "Your circles: " << std::endl;

	for (auto c : circles) {
		c.toString();
	}
	std::cout << "Your Squares" << std::endl;
	for (auto s : squares) {
		s.toString();
	}
}

void ShapeCollection::getMaxShapeByPerimeter()
{
	double maxCirc = 0;
	int maxCircPos = 0;
	double maxSquare = 0;
	int maxSquarePos = 0;
	int temp = 0;

	for (auto c : circles) {
		if (c.getPerimeter() > maxCirc) {
			maxCirc = c.getPerimeter();
			maxCircPos = temp;
		}
		temp++;
	}
	temp = 0;
	for (auto s : squares) {
		if (s.getPerimeter() > maxSquare) {
			maxSquare = s.getPerimeter();
			maxSquarePos = temp;
		}
		temp++;
	}

	std::cout << "the biggest figure by perimeter is: \n";
	if (maxCirc >= maxSquare)
		circles[maxCircPos].toString();
	else if (maxCirc < maxSquare)
		squares[maxSquarePos].toString();
}

void ShapeCollection::getMaxShapeByArea()
{
	double maxCirc = 0;
	int maxCircPos = 0;
	double maxSquare = 0;
	int maxSquarePos = 0;
	int temp = 0;

	for (auto c : circles) {
		if (c.getArea() > maxCirc) {
			maxCirc = c.getArea();
			maxCircPos = temp;
		}
		temp++;
	}
	temp = 0;
	for (auto s : squares) {
		if (s.getArea() > maxSquare) {
			maxSquare = s.getArea();
			maxSquarePos = temp;
		}
		temp++;
	}

	std::cout << "the biggest figure by area is: \n";
	if (maxCirc >= maxSquare)
		circles[maxCircPos].toString();
	else if (maxCirc < maxSquare)
		squares[maxSquarePos].toString();
}


void ShapeCollection::getFormulas()
{
	if (squares.size() > 0)
	{
		std::cout << "Kwadraty:\n";
		squares[0].printAreaFormula();
		std::cout << std::endl;
		squares[0].printPerimeterFormula();

	}
	if (circles.size() > 0)
	{
		std::cout << "\nKolka:\n";
		circles[0].printAreaFormula();
		std::cout << std::endl;
		circles[0].printPerimeterFormula();
	}
}