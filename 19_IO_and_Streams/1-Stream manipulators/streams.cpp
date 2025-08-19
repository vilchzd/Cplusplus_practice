#include <iostream>
#include <iomanip>

using namespace std;

int main () {


    cout << boolalpha; //noboolalpha 0/1 - true/false
    cout << (10 == 10) << endl;
    cout << noboolalpha; //noboolalpha 0/1 - true/false
    cout << (10 == 10) << endl;
    int test {255};
    cout << showbase << uppercase << showpos; 
    cout << std::dec << test << endl;
    cout << std::hex << test << endl;
    cout << std::oct << test << endl;
    return 0;
}

