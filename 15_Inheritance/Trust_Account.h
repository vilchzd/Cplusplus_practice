// Simple Account 
#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_
#include <iostream>
#include <string>
#include "Savings_Account.h"
using namespace std;

class Trust_Account: public Savings_Account { 

    friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);
private:   
    static constexpr const char *def_name = "Unnamed Trust Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
    static constexpr double bonus_amount = 50.0;
    static constexpr double bonus_threshold = 5000.0;
    static constexpr double max_withdrawls = 3;
    static constexpr double max_withdraw_percent = 0.2;
protected:
    int num_withdrawals;
public:
    Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
    // Account(std::string name = "Unamed Account", double balance = 0.0);
    bool deposit(double amount); // +5000 $50 bonus
    bool withdraw(double amount);

};
#endif