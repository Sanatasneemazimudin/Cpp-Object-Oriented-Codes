#include <iostream>
using namespace std;
class B;
class A {
private:
    int valueA;
public:
    A(int value) {
        valueA = value;
    }
    friend int addValues(A, B);
};
class B {
private:
    int valueB;
public:
    B(int value) {
        valueB = value;
    }
    friend int addValues(A, B);
};
int addValues(A a, B b) {
    return a.valueA + b.valueB;
}
int main() {
    A a(10);
    B b(20);
    cout << "Sum: "
         << addValues(a, b)
         << endl;
    return 0;
}