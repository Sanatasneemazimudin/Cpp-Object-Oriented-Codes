#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int age;
public:
    Student(string n, int a) {
        name = n;
        age = a;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
int main() {
    Student student1("Sana", 20);
    Student student2("Alex", 21);
    student1.display();
    cout << endl;
    student2.display();
    return 0;
}