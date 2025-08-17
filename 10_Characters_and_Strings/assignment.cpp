#include <iostream>
#include <cctype>
#include <cstring>
#include <string>
using namespace std;


main () {
    string user_input{};
    string center{};
    string lside{};
    string rside{};
    string spaces{};
    cout << "Enter a string: ";
    cin >> user_input;
    size_t pyramid_rows{user_input.length()};
    for (size_t i{0}; i < pyramid_rows ;i++) {
        center = user_input.at(i);
        if (i != 0) {
            lside += user_input.at(i-1);
            rside = lside;
            for (size_t j{0}; j < lside.length(); j++) {
                rside[j] = lside[lside.length()-j-1];
            }
            spaces = string(user_input.length()-i, ' ');
            cout << spaces + lside + center + rside << endl;
        } else {
            spaces = string(user_input.length(), ' ');
            cout << spaces << center << endl;
        }
    }

    return 0;
} 