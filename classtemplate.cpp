#include <iostream>
using namespace std;
template <typename T>
class Calculator {
private:
    T value;
public:
    Calculator(T v) {
        value = v;
    }
    T square() {
       return value * value;
    }
    void display() {
        cout << "Value: "
             << value << endl;
        cout << "Square: "
             << square() << endl;
    }
};
int main() {
    Calculator<int> integerCalc(5);
    Calculator<double> doubleCalc(5.5);
    integerCalc.display();
    cout << endl;
    doubleCalc.display();
    return 0;
}