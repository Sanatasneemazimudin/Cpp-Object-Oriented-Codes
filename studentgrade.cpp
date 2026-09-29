#include <iostream>
#include <vector>
using namespace std;
struct Student {
    string name;
    int marks;
};
int main() {
    vector<Student> students;
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    for(int i=0; i<n; i++) {
        Student s;
        cout << "Enter name: ";
        cin >> s.name;
        cout << "Enter marks: ";
        cin >> s.marks;
        students.push_back(s);
    }
    cout << "\n--- Student Report ---\n";
    for(auto &s : students) {
        cout << s.name << " scored " << s.marks;
        if(s.marks >= 50) cout << " (Pass)\n";
        else cout << " (Fail)\n";
    }
    return 0;
}
