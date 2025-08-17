#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

string swap_string(const std::string &str) {
    string reversed{};
    size_t size{str.length()};
    for (size_t i{0}; i < size; i++) {
            reversed.push_back(str[size - (i + 1)]);
    }
    return reversed;
}

string swap_string_pointer(const std::string &str) {
    string reversed{};
    size_t size{str.length()};              
    const char* end = str.c_str() + str.size() - 1;        
    for (size_t i{0}; i < size; i++) {
            reversed.push_back(*(end - i));
    }
    return reversed;
}

main () {
    string message{"Hello World!"}; 
    string reversed = swap_string_pointer(message);
    cout << reversed << endl;
    return 0;
}


