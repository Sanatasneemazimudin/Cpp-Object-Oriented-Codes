#include <iostream>
using namespace std;
class Number {
private:
    int value;
public:
    Number(int value) {
        this->value = value;
    }
    Number& increase() {
        value++;
        return *this;
    }
    void display() {
        cout << "Value: " << value << endl;
    }
};
int main() {
    Number num(10);
    num.increase().increase().increase();
    num.display();
    return 0;
}