#include <iostream>
using namespace std;
class Rectangle {
private:
    int length;
    int width;
public:
    Rectangle(int length, int width) {
        this->length = length;
        this->width = width;
    }
    int area() {
        return this->length * this->width;
    }
};
int main() {
    Rectangle rectangle(10, 5);
    cout << "Area: "
         << rectangle.area()
         << endl;
    return 0;
}