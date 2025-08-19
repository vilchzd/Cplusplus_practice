#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ifstream in_file;
    string line;
    int index{0};
    ofstream out_file{"copy_poem.txt"};
    if (!out_file) {
        cerr << "Error creating output file" << endl;
        return 1;
    }
    in_file.open("romeoandjuliet.txt");
    if (!in_file) {
        cerr << "Error openning file" << endl;
        return 1;
    }
    while (getline(in_file, line)) {
        if (line == "") {
            out_file << endl;
        } else {
            index++;
            out_file << setw(7) << left << index << line << endl;
        }
    }

    cout << "Copy complete" << endl;
    in_file.close();
    out_file.close();


    return 0;
}