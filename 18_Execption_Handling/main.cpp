#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    // test your code here
    std::unique_ptr<Account> moes_account;
    std::unique_ptr<Account> larrys_account;
    std::unique_ptr<Account> curlys_account;
    try {
        larrys_account = make_unique<Checking_Account>("Larry",2000.0);
        cout << *larrys_account << endl;
        curlys_account = make_unique<Savings_Account>("Curly",-2000.0);
        cout << *curlys_account << endl;
    }
    catch (const IllegalBalanceException &ex) {
        cerr << ex.what() << endl;
    }
    try {
        curlys_account = make_unique<Trust_Account>("Curly",-2000.0);
        cout << *curlys_account << endl;
    }
    catch (const IllegalBalanceException &ex) {
        cerr << ex.what() << endl;
    }
    try {
    moes_account = make_unique<Savings_Account>("Moe",1000.0);
    cout << *moes_account << endl;
    moes_account->withdraw(200.0);
    cout << *moes_account << endl;
    moes_account->withdraw(2000.0);
    cout << *moes_account << endl;

    }
    catch (const IllegalBalanceException &ex) {
        cerr << ex.what() << endl;
    }
    catch (const InsufficientFundsException &ex){
        cerr << ex.what() << endl;
    }
    cout << "Program completed successfully" << endl;
    return 0;
}

