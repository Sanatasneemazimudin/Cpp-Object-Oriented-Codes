#include <iostream>
using namespace std;
class Complex {
private:
    int real;
    int imaginary;
public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imaginary = i;
    }
    Complex operator+(const Complex& other) {
        Complex result;
        result.real = real + other.real;
        result.imaginary = imaginary + other.imaginary;
        return result;
    }
    void display() {
        cout << real << " + "
             << imaginary << "i"
             << endl;
    }
};
int main() {
    Complex c1(3, 4);
    Complex c2(5, 6);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}