#include <iostream>
using namespace std;
class Distance {
private:
    int meters;
public:
    Distance(int m = 0) {
        meters = m;
    }
    Distance operator+(const Distance& d) {
        return Distance(meters + d.meters);
    }
    void display() {
        cout << "Distance: "
             << meters
             << " meters" << endl;
    }
};
int main() {
    Distance d1(100);
    Distance d2(250);
    Distance total = d1 + d2;
    total.display();
    return 0;
}