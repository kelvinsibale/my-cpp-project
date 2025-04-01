#include <iostream>
#include <cmath>
using namespace std;


double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}


double calculateRectangleArea(double length, double width) {
    return length * width;
}

double calculateSquareArea(double side) {
    return side * side;
}

int main() {
    while (true) {
        cout << "Select a shape to calculate the area:\n";
        cout << "1. Triangle\n2. Rectangle\n3. Square\n4. Quit\n";
        int choice;
        cin >> choice;

        if (choice == 4) {
            cout << "Exiting the program. Goodbye!" << endl;
            break;
        }

        switch (choice) {
            case 1: {
                double base, height;
                cout << "Enter the base and height of the triangle: ";
                cin >> base >> height;
                cout << "Area of the triangle: " << calculateTriangleArea(base, height) << endl;
                break;
            }
            case 2: {
                double length, width;
                cout << "Enter the length and width of the rectangle: ";
                cin >> length >> width;
                cout << "Area of the rectangle: " << calculateRectangleArea(length, width) << endl;
                break;
            }
            case 3: {
                double side;
                cout << "Enter the side length of the square: ";
                cin >> side;
                cout << "Area of the square: " << calculateSquareArea(side) << endl;
                break;
            }
            default:
               cout << "Invalid input. Please try again." <<endl;
                break;
        }
    }

    return 0;
}