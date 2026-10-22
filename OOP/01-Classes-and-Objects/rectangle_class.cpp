#include<iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const {
        return length * width;
    }

    double perimeter() const {
        return 2 * (length + width);
    }
};
int main() {
    Rectangle rect1(5.0, 3.0);
    Rectangle rect2(10.0, 1.0);

    cout << "Rectangle 1 Area: " << rect1.area() << "\n";
    cout << "Rectangle 1 Perimeter: " << rect1.perimeter() << "\n";

    cout << "Rectangle 2 Area: " << rect2.area() << "\n";
    cout << "Rectangle 2 Perimeter: " << rect2.perimeter() << "\n";

    return 0;
}
