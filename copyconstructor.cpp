#include <iostream>
using namespace std;
class Student {
public:
    string name;
    int age;
    Student(string n, int a) {
        name = n;
        age = a;
    }
    Student(const Student &student) {
        name = student.name;
        age = student.age;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
int main() {
    Student student1("Sana", 20);
    Student student2(student1);
    cout << "Original Object:" << endl;
    student1.display();
    cout << "\nCopied Object:" << endl;
    student2.display();
    return 0;
}