#include<iostream>
#include"ShapeCollection.h"
#include"Square.h"
#include"Circle.h"

int main() {

    int choice;
    ShapeCollection Shapes;
    while (true) {
        std::cout << "1.Add new shape\n2.Show the largest shape (perimeter)\n3.Show the largest shape area\n4.Quit\n5.Formulas\nChoice:";
        std::cin >> choice;

        if (choice == 1) {

            std::cout << "1.Add Square\n2.Add Circle\nChoice: ";
            std::cin >> choice;
            if (choice == 1)
                Shapes.addShape("square");
            else if (choice == 2)
                Shapes.addShape("circle");
            else
                std::cerr << "error";

        }
        else if (choice == 2)
            Shapes.getMaxShapeByPerimeter();
        else if (choice == 3)
            Shapes.getMaxShapeByArea();
        else if (choice == 4) {
            std::cout << "Good bye!";
            break;
        }
        else if (choice == 5)
        {
            Shapes.getFormulas();
        }
        else
            std::cerr << "\nError\n";

    }
    return 0;
}