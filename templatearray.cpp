#include <iostream>
using namespace std;
template <typename T>
class Array {
private:
    T elements[5];
public:
    void input() {
        cout << "Enter 5 values:" << endl;
        for (int i = 0; i < 5; i++) {
            cin >> elements[i];
        }
    }
    void display() {
        cout << "Array elements:" << endl;
        for (int i = 0; i < 5; i++) {
            cout << elements[i] << " ";
        }
        cout << endl;
    }
};
int main() {
    Array<int> numbers;
    numbers.input();
    numbers.display();
    return 0;
}