#include <iostream>
#include <stdexcept>
using namespace std;
class BankAccount {
private:
    double balance;
public:
    BankAccount(double amount) {
        balance = amount;
    }
    void withdraw(double amount) {
        if (amount > balance) {
            throw runtime_error(
                "Insufficient balance!"
            );
        }
        balance -= amount;
        cout << "Withdrawal successful." << endl;
    }
};
int main() {
    BankAccount account(5000);
    try {
        account.withdraw(7000);
    }
    catch (const runtime_error& error) {
        cout << "Error: "
             << error.what()
             << endl;
    }
    return 0;
}