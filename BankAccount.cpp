#include <iostream>
using namespace std;
class BankAccount {
public:
    string accountNumber;
    string accountHolder;
    int balance;
    void deposit() {
        int amount;
        cout << "Enter Amount To Be Deposited: ";
        cin >> amount;
        balance = balance + amount;
    }
    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance<<endl;
    }
};
int main() {
    BankAccount obj1;
    cout << "\nEnter Account Number: ";
    cin >> obj1.accountNumber;
    cout << "Enter Account Holder Name: ";
    cin >> obj1.accountHolder;
    cout << "Enter Initial Balance: ";
    cin >> obj1.balance;
    cout << "\nBefore Deposit:\n";
    obj1.display();
    obj1.deposit();
    cout << "\nAfter Deposit:\n";
    obj1.display();
    return 0;
}