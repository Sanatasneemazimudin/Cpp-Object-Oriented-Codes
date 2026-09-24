#include <iostream>
using namespace std;
class Shape {
public:
    virtual void area() {
        cout << "Calculating area..." << endl;
    }
};
class Rectangle : public Shape {
private:
    int length;
    int width;
public:
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }
    void area() override {
        cout << "Rectangle Area: "
             << length * width
             << endl;
    }
};
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }
    void area() override {
        cout << "Circle Area: "
             << 3.14 * radius * radius
             << endl;
    }
};
int main() {
    Shape* shape;
    Rectangle rectangle(10, 5);
    Circle circle(5);
    shape = &rectangle;
    shape->area();
    shape = &circle;
    shape->area();
    return 0;
}