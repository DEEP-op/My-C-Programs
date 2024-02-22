#include <iostream>
#include <vector>

using namespace std;

class BankAccount {
protected:
    double balance;

public:
    BankAccount(double initialBalance) : balance(initialBalance) {}

    virtual void deposit(double amount) {
        balance += amount;
    }

    virtual void withdraw(double amount) {
        balance -= amount;
    }

    double getBalance() const {
        return balance;
    }
};

class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(double initialBalance, double rate) : BankAccount(initialBalance), interestRate(rate) {}

    void deposit(double amount) override {
        BankAccount::deposit(amount);
        balance += amount * interestRate;
    }

    void withdraw(double amount) override {
        if (balance - amount >= 0) {
            BankAccount::withdraw(amount);
        } else {
            cout << "Withdrawal amount exceeds balance. Transaction canceled." << endl;
        }
    }
};

class CheckingAccount : public BankAccount {
private:
    double transactionFee;

public:
    CheckingAccount(double initialBalance, double fee) : BankAccount(initialBalance), transactionFee(fee) {}

    void withdraw(double amount) override {
        if (balance - amount - transactionFee >= 0) {
            BankAccount::withdraw(amount + transactionFee);
        } else {
            cout << "Withdrawal amount exceeds balance. Transaction canceled." << endl;
        }
    }
};

int main() {
    SavingsAccount savingsAcc(1000.0, 0.05);
    CheckingAccount checkingAcc(800.0, 2.0);

    vector<BankAccount*> accounts = {&savingsAcc, &checkingAcc};

    for (auto account : accounts) {
        account->deposit(500.0);
        cout << "Balance after deposit: " << account->getBalance() << endl;

        account->withdraw(200.0);
        cout << "Balance after withdrawal: " << account->getBalance() << endl;

        cout << endl;
    }

    return 0;
}
