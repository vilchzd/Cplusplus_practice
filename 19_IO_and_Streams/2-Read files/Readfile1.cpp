#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

//fstream in_file {test.txt,ios::in};
//infile.open(filename)
//in_file.is_open() true - false
//in_file.close() 
//getline(in_file,line)
//eof() - endo of file


int main () {
    string line {};
    int num {};
    double total {};
    ifstream in_file;
    in_file.open("test.txt"); //Hierachy -> ../
    if(!in_file) {
        cerr << "Problem opening file" << endl;
        return 1;
    }
    cout << "File ready" << endl;
    
    while(!in_file.eof()) {
    in_file >> line >> num >> total;
    cout << setw(10) << left << line << setw(10) << num << setw(10) << total << endl;
    }


    in_file.close();
    return 0;
}

