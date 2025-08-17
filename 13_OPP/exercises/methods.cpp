#include <iostream>
#include <vector>
#include <string>
using namespace std;

#include "Account.h"

/* class Account {
private:
    string name {"dogey"};
    double balance{0.0};
    //Methods
public:
    void set_balance(double bal);
    double get_balance();
    bool deposit(double bal) {balance += bal; cout << "In deposit" << endl; return true;}
    bool withdraw(double bal) {balance -= bal; cout << "In withdraw" << endl; return true;}
};

void Account::set_balance(double bal) {
    balance = bal;
}

double Account::get_balance() {
    return balance;
}
 */

int main () {
    Account frank_account;
    frank_account.set_name("Frank");
    frank_account.set_balance(1000.0);
    double bank = frank_account.get_balance();
    cout << "The account has: " << bank << endl;

    if (frank_account.deposit(200))
        cout << "Deposit OK" << endl;
    else
        cout << "Deposit unallowed" << endl;
    if (frank_account.withdraw(500))
        cout << "Withdrawal OK" << endl;
    else
        cout << "Withdrawal unallowed" << endl;
    if (frank_account.withdraw(2000))
        cout << "Withdrawal OK" << endl;
    else
        cout << "Withdrawal unallowed" << endl;







    return 0;
}


