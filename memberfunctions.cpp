#include <iostream>
using namespace std;
class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    int subtract(int a, int b) {
        return a - b;
    }
    int multiply(int a, int b) {
        return a * b;
    }
};
int main() {
    Calculator calc;
    cout << "Addition: "
         << calc.add(10, 5) << endl;
    cout << "Subtraction: "
         << calc.subtract(10, 5) << endl;
    cout << "Multiplication: "
         << calc.multiply(10, 5) << endl;
    return 0;
}