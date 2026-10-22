# Rectangle Class

## Concepts Practiced
- Classes and objects
- Private data members
- Parameterized constructor
- Member initializer list
- Const member functions
- Returning values from functions

## Formulas
- Area = length × width
- Perimeter = 2 × (length + width)

## Test Cases
| Length | Width | Area | Perimeter |
|---:|---:|---:|---:|
| 5 | 3 | 15 | 16 |
| 10 | 1 | 10 | 22 |

## What I Learned
- Private members protect an object's internal data.
- A constructor initializes the dimensions.
- `const` member functions can calculate values without modifying the object.


code is:
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
