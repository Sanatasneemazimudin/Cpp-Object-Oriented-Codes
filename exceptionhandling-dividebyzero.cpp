#include <iostream>
using namespace std;
int main() {
    int numerator;
    int denominator;
    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;
    try {
        if (denominator == 0) {
            throw "Cannot divide by zero!";
        }
        cout << "Result: "
             << (double)numerator / denominator
             << endl;
    }
    catch (const char* message) {
        cout << "Error: "
             << message
             << endl;
    }
    return 0;
}