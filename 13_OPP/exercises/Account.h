#include <string>
#include <iostream>

#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
//#pragma once 
using namespace std;

class Account {
private:
    string name;
    double balance{0.0};

public:
    void set_balance(double bal);
    double get_balance();
    void set_name(string n);
    bool deposit(double bal);
    bool withdraw(double bal); 
};

void Account::set_balance(double bal) {
    balance = bal;
}
double Account::get_balance() {
    return balance;
}

void Account::set_name(string n) {
    name = n;
}

bool Account::deposit(double bal) {
    balance += bal; 
    cout << bal << " deposited" << endl;
    return true;
}

bool Account::withdraw(double bal){
    if (balance - bal >= 0) {  
        balance -= bal; 
        cout << bal << " withdrew" << endl; 
    } else {
        return false;
    }
    return true;
}


#endif