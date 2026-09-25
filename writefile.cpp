#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream file("student.txt");
    if (!file) {
        cout << "Unable to open file."
             << endl;
        return 1;
    }
    file << "Name: Sana" << endl;
    file << "Age: 20" << endl;
    file << "Course: Computer Science" << endl;
    file.close();
    cout << "Data written successfully."
         << endl;
    return 0;
}