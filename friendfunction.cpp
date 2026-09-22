#include <iostream>
using namespace std;
class Box {
private:
    int length;
public:
    Box(int l) {
        length = l;
    }
    friend void displayLength(Box box);
};
void displayLength(Box box) {
    cout << "Length: "
         << box.length
         << endl;
}
int main() {
    Box box(20);
    displayLength(box);
    return 0;
}