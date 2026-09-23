#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int age;
public:
    Student(string name, int age) {
        this->name = name;
        this->age = age;
    }
    void display() {
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
    }
};
int main() {
    Student student("Sana", 20);
    student.display();
    return 0;
}