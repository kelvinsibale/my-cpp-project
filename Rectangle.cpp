#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    // this is a default constructor
    Rectangle() {
        length = 0.0;
        width = 0.0;
    }

    // this is an overloaded constructor
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    // and this one is destructor
    ~Rectangle() {
        // does not do anything for now
    }

    // below are the setter methods
    void setLength(float l) {
        length = l;
    }

    void setWidth(float w) {
        width = w;
    }

    // these are the getter methods
    float getLength() const {
        return length;
    }

    float getWidth() const {
        return width;
    }

    // Method to calculate area
    float calculateArea() const {
        return length * width;
    }
};

int main() {
    // First rectangle using the default constructor
    Rectangle rect1;
    float len1, wid1;

    cout << "Enter the length of the first rectangle: ";
    cin >> len1;
    cout << "Enter the width of the first rectangle: ";
    cin >> wid1;

    rect1.setLength(len1);
    rect1.setWidth(wid1);

    cout << "The area of the first rectangle is: " << rect1.calculateArea() << endl;

    // Second rectangle using the overloaded constructor
    float len2, wid2;
    cout << "\nEnter the length of the second rectangle: ";
    cin >> len2;
    cout << "Enter the width of the second rectangle: ";
    cin >> wid2;

    Rectangle rect2(len2, wid2);

    cout << "The area of the second rectangle is: " << rect2.calculateArea() << endl;

    return 0;
}
