#include <iostream>
using namespace std;
class Number {
private:
    int value;
public:
    Number(int v) {
        value = v;
    }
    void operator++() {
        ++value;
    }
    void display() {
        cout << "Value: " << value << endl;
    }
};
int main() {
    Number num(10);
    num.display();
    ++num;
    num.display();
    return 0;
}