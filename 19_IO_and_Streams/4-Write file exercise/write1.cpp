// out_file.open(filenname);
// out_file.is_open()
// if(out_file)
// outfile.close()
//out_file.put()

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main () {

    ofstream out_file {"output.txt"};
    if (!out_file) {
        cerr << "Error loading file" << endl;
        return 1;
    }
    string line;
    cout << "Insert something to be added on the file: ";
    getline(cin,line);
    out_file << line << endl;
    out_file.close();
    return 0;
}


using namespace std;