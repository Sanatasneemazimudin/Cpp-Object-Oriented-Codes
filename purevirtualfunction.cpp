#include <iostream>
using namespace std;
class Shape {
public:
    virtual void area() = 0;
};
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) {
        radius = r;
    }
    void area() override {
        cout << "Area of Circle: "
             << 3.14 * radius * radius
             << endl;
    }
};
int main() {
    Circle circle(5);
    circle.area();
    return 0;
}