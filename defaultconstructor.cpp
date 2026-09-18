#include <iostream>
using namespace std;
class Student {
public:
    string name;
    int age;
    Student() {
        name = "Unknown";
        age = 0;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
int main() {
    Student student;
    student.display();
    return 0;
}