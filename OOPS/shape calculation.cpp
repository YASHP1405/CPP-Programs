// Find the area and perimeter of a circle, rectangle, and triangle.
#include<iostream>
using namespace std;

class Shape {
public:    virtual void area() = 0;
    virtual void perimeter() = 0;
};  
class Circle : public Shape {
    float radius;
public:    Circle(float r) {
        radius = r;
    }
    void area() {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }

    void perimeter() {
        cout << "Perimeter of Circle: " << 2 * 3.14 * radius << endl;
    }
};
class Rectangle : public Shape {
    float length, width;
public:    Rectangle(float l, float w) {
        length = l;
        width = w;
    }
    void area() {
        cout << "Area of Rectangle: " << length * width << endl;
    }
    void perimeter() {
        cout << "Perimeter of Rectangle: " << 2 * (length + width) << endl;
    }
};
class Triangle : public Shape {
    float base, height, side1, side2, side3;
public:    Triangle(float b, float h, float s1, float s2, float s3) {
        base = b;
        height = h;
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }
    void area() {
        cout << "Area of Triangle: " << 0.5 * base * height << endl;
    }
    void perimeter() {
        cout << "Perimeter of Triangle: " << side1 + side2 + side3 << endl;
    }
};
int main() {
    Circle c(5);
    Rectangle r(4, 6);
    Triangle t(5, 3, 4, 5, 6);

    c.area();
    c.perimeter();

    r.area();
    r.perimeter();

    t.area();
    t.perimeter();

    return 0;
}
