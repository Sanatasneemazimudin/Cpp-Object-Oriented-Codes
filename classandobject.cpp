#include <iostream>
using namespace std;
class Student {
public:
    string name;
    int age;
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
int main() {
    // Creating an object
    Student student1;
    student1.name = "Sana";
    student1.age = 20;
    student1.display();
    return 0;
}