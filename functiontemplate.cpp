#include <iostream>
using namespace std;

// Function template
template <typename T>

T maximum(T a, T b) {

    return (a > b) ? a : b;
}

int main() {

    cout << "Maximum integer: "
         << maximum(10, 20)
         << endl;

    cout << "Maximum double: "
         << maximum(10.5, 5.5)
         << endl;

    cout << "Maximum character: "
         << maximum('A', 'Z')
         << endl;

    return 0;
}