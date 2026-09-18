#include <iostream>
using namespace std;
class Student {
private:
    int marks;
public:
    string name;
    void setMarks(int m) {
        marks = m;
    }
    int getMarks() {
        return marks;
    }
};
int main() {
    Student student;
    student.name = "Sana";
    student.setMarks(90);
    cout << "Name: " << student.name << endl;
    cout << "Marks: " << student.getMarks() << endl;
    return 0;
}