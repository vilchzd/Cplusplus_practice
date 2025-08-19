// Section 19
// Challenge 3
// Word counter
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

bool find_substring(const std::string &word_to_find, const std::string &target) {
    std::size_t found = target.find(word_to_find);
    if (found == std::string::npos)
        return false;
    else
        return true;
}

int main() {
    ifstream in_file;
    string line;
    string word;
    int total_words{0}; 
    int matches{0};
    int substring{0};

    in_file.open("romeoandjuliet.txt");
    if (!in_file) {
        cerr << "Problem opening file" << endl;
        return 1;
    }
    cout << "Type the word you want to search: ";
    cin >> word;
    cout << "This is the word you just typed: " << word << endl; 

    while (in_file >> line) {
        total_words++;
        if (word == line) {
            matches++; 
        }
        if (find_substring(word, line)) {
            substring++;
        }
    }

    cout << "There are " << matches << " matches for the word *" << word << "* found in " << total_words <<" words." <<endl;
    cout << "There are " << substring << " matches for the substring ~" << word << "~ found in " << total_words <<" words." <<endl;
    
    return 0;
}

