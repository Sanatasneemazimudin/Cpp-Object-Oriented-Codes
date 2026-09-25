#include <iostream>
using namespace std;
template <typename T, typename U>
void display(T first, U second) {
    cout << "First value: "
         << first << endl;
    cout << "Second value: "
         << second << endl;
}
int main() {
    display(10, 20.5);
    display("Age", 20);
    return 0;
}