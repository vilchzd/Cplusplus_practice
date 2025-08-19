// Section 19
// Challenge 2
// Automated Grader
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int proccess_responses(string responses) {
    string answer = "ABCDE";
    int score = 0;
    for (size_t i = 0; i < answer.size() ; i++) {
        if (responses.at(i) == answer.at(i)) {
            score ++;
        }
    }
    return score;
}

int main() {
    ifstream in_file;
    string line;
    string responses;
    string names;
    int score = 0;
    int total_score = 0;
    int students = 0;  // Initialize students
    float average;

    in_file.open("responses.txt");
    if (!in_file) {
        cerr << "Problem opening file" << endl;
        return 1;
    }
    cout << "File ready" << endl;
    cout << left  << setw(30) << "Student's name:" << setw(20) << "Grade:" << "Score:"<< endl;
    cout << setw(56) << setfill('-') << "" << endl;

    while (in_file >> responses >> names) {
        ++students;
        score = proccess_responses(responses);
        cout << setfill(' ') << left << setw(30) << names << setw(20) << responses << score << endl;
        total_score += score;
    }

    if (students!=0) {
        average = static_cast<double>(total_score) /students;
        cout << "Average score: " << average << endl;
    }

    in_file.close();
    return 0;
}
