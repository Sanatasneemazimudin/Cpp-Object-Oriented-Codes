#include <iostream>
using namespace std;
class Parent {
public:
    virtual ~Parent() {
        cout << "Parent destructor called." << endl;
    }
};
class Child : public Parent {
public:
    ~Child() {
        cout << "Child destructor called." << endl;
    }
};
int main() {
    Parent* object = new Child();
    delete object;
    return 0;
}