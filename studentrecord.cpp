#include <iostream>
#include <fstream>
using namespace std;
class Student {
private:
    string name;
    int age;
    float marks;
public:
    Student(string n, int a, float m) {
        name = n;
        age = a;
        marks = m;
    }
    void saveToFile() {
        ofstream file("students.txt", ios::app);
        file << name << " "
             << age << " "
             << marks << endl;
        file.close();
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main() {
    Student student1("Sana", 20, 89.5);
    student1.display();
    student1.saveToFile();
    cout << "Student record saved."
         << endl;
    return 0;
}