#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream file("student.txt");
    if (!file) {
        cout << "Unable to open file."
             << endl;
        return 1;
    }
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
    return 0;
}