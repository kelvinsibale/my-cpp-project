#include <iostream>
#include <cmath>

namespace shapes {

    // Square class definition
    class Square {
    private:
        double sideLength;

    public:
        // Default constructor
        Square() : sideLength(0.0) {}

        // Overloaded constructor
        Square(double side) : sideLength(side) {}

        // Accessor method
        double getSideLength() const {
            return sideLength;
        }

        // Destructor
        ~Square() {}
    };

    // Triangle class definition
    class Triangle {
    private:
        double base;
        double height;

    public:
        // Default constructor
        Triangle() : base(0.0), height(0.0) {}

        // Overloaded constructor
        Triangle(double b, double h) : base(b), height(h) {}

        // Accessor methods
        double getBase() const {
            return base;
        }

        double getHeight() const {
            return height;
        }

        // Destructor
        ~Triangle() {}
    };

    // Circle class definition
    class Circle {
    private:
        double radius;

    public:
        // Default constructor
        Circle() : radius(0.0) {}

        // Overloaded constructor
        Circle(double r) : radius(r) {}

        // Accessor method
        double getRadius() const {
            return radius;
        }

        // Destructor
        ~Circle() {}
    };

    // Area class definition
    class Area {
    public:
        // Static method to calculate area of square
        static double calculateArea(const Square& square) {
            return std::pow(square.getSideLength(), 2);
        }

        // Static method to calculate area of triangle
        static double calculateArea(const Triangle& triangle) {
            return 0.5 * triangle.getBase() * triangle.getHeight();
        }

        // Static method to calculate area of circle
        static double calculateArea(const Circle& circle) {
            
            const double PI = 3.141592653589793;
            return PI * std::pow(circle.getRadius(), 2);
        }
    };
}

int main() {
    int choice;
    do {
        // Display menu options
        std::cout << "\nSelect an option:\n";
        std::cout << "1. Calculate the area of a square\n";
        std::cout << "2. Calculate the area of a triangle\n";
        std::cout << "3. Calculate the area of a circle\n";
        std::cout << "4. Quit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            // Calculate area of a square
            double side;
            std::cout << "Enter the side length of the square: ";
            std::cin >> side;
            shapes::Square square(side);
            double area = shapes::Area::calculateArea(square);
            std::cout << "The area of the square is: " << area << std::endl;
        } 
        else if (choice == 2) {
            // Calculate area of a triangle
            double base, height;
            std::cout << "Enter the base of the triangle: ";
            std::cin >> base;
            std::cout << "Enter the height of the triangle: ";
            std::cin >> height;
            shapes::Triangle triangle(base, height);
            double area = shapes::Area::calculateArea(triangle);
            std::cout << "The area of the triangle is: " << area << std::endl;
        } 
        else if (choice == 3) {
            // Calculate area of a circle
            double radius;
            std::cout << "Enter the radius of the circle: ";
            std::cin >> radius;
            shapes::Circle circle(radius);
            double area = shapes::Area::calculateArea(circle);
            std::cout << "The area of the circle is: " << area << std::endl;
        } 
        else if (choice != 4) {
            std::cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 4);  // Continue until the user chooses to quit

    return 0;
}
