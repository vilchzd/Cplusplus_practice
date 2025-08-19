#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream in_file;
    string line;

    in_file.open("poem.txt");
    if (!in_file) {
        cerr << "Problem opening file" << endl;
        return 1;
    }
    cout << "File ready" << endl;

    while (getline(in_file, line)) {
        cout << line << endl;
    }
    

    // char c {};
    // while (in_file.get(c)) {
    //     cout << c;
    // }
    // cout << endl;

    in_file.close();
    return 0;
}
