#include <iostream>
using namespace std;
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};
class Puppy : public Dog {
public:
    void play() {
        cout << "Puppy is playing." << endl;
    }
};
int main() {
    Puppy puppy;
    puppy.eat();
    puppy.bark();
    puppy.play();
    return 0;
}