#include <iostream>
#include <cctype>
#include <cstring>
#include <string>
using namespace std;

main () {
    string alpha {"aeiou"};
    string key {"$&%!¿"};
    string secret {};
    string encrypt {};
    string decrypt {};
    cout << "Enter messsage: " << endl;
    getline(cin,secret);
    for (auto c : secret) {
        size_t position = alpha.find(c);
        if (position != string::npos) {
          char new_char {key.at(position)};
          encrypt += new_char;  
        } else {
            encrypt += c;
        }
    }
    cout << "Encripted messsage: " << encrypt << endl;
    for (auto c : encrypt) {
        size_t position = key.find(c);
        if (position != string::npos) {
        char new_char {alpha.at(position)};
        decrypt += new_char;  
        } else {
        decrypt += c;
        }
    }
    cout << "Deccripted messsage: " << decrypt << endl;
    return 0;
}