#include <iostream>
using namespace std;
int main() {
    int choice;
    cout << "Enter 1 for integer exception." << endl;
    cout << "Enter 2 for string exception." << endl;
    cin >> choice;
    try {
        if (choice == 1) {
            throw 100;
        }
        else if (choice == 2) {
            throw "Something went wrong!";
        }
        else {
            throw 3.14;
        }
    }
    catch (int error) {
        cout << "Integer exception: "
             << error << endl;
    }
    catch (const char* error) {
        cout << "String exception: "
             << error << endl;
    }
    catch (double error) {
        cout << "Double exception: "
             << error << endl;
    }
    return 0;
}