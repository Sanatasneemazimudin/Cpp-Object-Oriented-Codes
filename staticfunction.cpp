#include <iostream>
using namespace std;
class Math {
public:
    static int square(int number) {
        return number * number;
    }
};
int main() {
    cout << "Square: "
         << Math::square(5)
         << endl;
    return 0;
}