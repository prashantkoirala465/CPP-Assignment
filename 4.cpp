// Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.
#include <iostream>
using namespace std;

class Triangle {
private:
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3)
        : side1(s1), side2(s2), side3(s3) {}

    bool isValid() {
        if (side1 + side2 > side3 &&
            side2 + side3 > side1 &&
            side3 + side1 > side2) {
            return true;
        }
        return false;
    }

    bool isEquilateral() {
        return (side1 == side2 && side2 == side3 && isValid());
    }

    bool isIsosceles() {
        return ( (side1 == side2 || side2 == side3 || side3 == side1) && isValid() && !isEquilateral());
    }

    bool isScalene() {
        return (side1 != side2 && side2 != side3 && side3 != side1 && isValid());
    }
};

int main() {
    Triangle t1(3, 3, 3);
    cout << "Is Equilateral? " << boolalpha << t1.isEquilateral() << endl;
    cout << "Is Isosceles? "   << boolalpha << t1.isIsosceles()   << endl;
    cout << "Is Scalene? "    << boolalpha << t1.isScalene()     << endl;

    return 0;
}
