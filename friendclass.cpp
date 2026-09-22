#include <iostream>
using namespace std;
class Student {
private:
    int marks;
public:
    Student(int m) {
        marks = m;
    }
    friend class Teacher;
};
class Teacher {
public:
    void displayMarks(Student student) {
        cout << "Student Marks: "
             << student.marks
             << endl;
    }
};
int main() {
    Student student(95);
    Teacher teacher;
    teacher.displayMarks(student);
    return 0;
}