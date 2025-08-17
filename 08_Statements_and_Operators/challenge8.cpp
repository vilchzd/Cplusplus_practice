#include <iostream>
#include <vector>
using namespace std;

main () {
    int amount{}, change{}, dollar,quarter{}, dime{}, nickel{}, pennie {};
    const int dollar_v{100},quarter_v{25},dime_v{10},nickel_v{5},pennie_v{1}; 
    cout << "Pon una cantidad en centavos: " << endl;
    cin >> amount;

    dollar = amount / dollar_v;
    change = amount - (dollar * dollar_v);

    quarter = change / quarter_v;
    change -= (quarter * quarter_v);

    dime = change / dime_v;
    change -= (dime * dime_v);

    nickel = change / nickel_v;
    change -= (nickel * nickel_v);

    pennie = change / pennie_v;
    change -= (pennie * pennie_v);

    cout << "dollars: "  << dollar << endl;
    cout << "quarters: " << quarter << endl;
    cout << "dimes: "    << dime << endl;
    cout << "nickels: "  << nickel << endl;
    cout << "pennies: "  << pennie << endl;

    return 0;
}