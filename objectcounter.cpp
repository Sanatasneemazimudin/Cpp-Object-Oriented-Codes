#include <iostream>
using namespace std;
class Employee {
private:
    static int count;
public:
    Employee() {
        count++;
    }
    static void showCount() {
        cout << "Employees created: "
             << count
             << endl;
    }
};
int Employee::count = 0;
int main() {
    Employee e1;
    Employee e2;
    Employee e3;
    Employee e4;
    Employee::showCount();
    return 0;
}