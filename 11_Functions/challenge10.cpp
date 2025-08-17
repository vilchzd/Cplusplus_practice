#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void add_list(vector<int> &);
void print_list(const vector<int> &); 
void print_smallest(const vector<int> &);
void print_largest(const vector<int> &vec);
void average_list(const vector<int> &);
void clear_list(vector<int> &);

// --------------------------Programa principal------------------------------------------ //

int main() {
    cout << "----------------" << endl;
    cout << "P" << endl;
    cout << "A" << endl;
    cout << "M" << endl;
    cout << "S" << endl;
    cout << "L" << endl;
    cout << "F" << endl;
    cout << "Q" << endl;
    cout << "----------------" << endl; 

    vector<int> vec{};
    char select{};
    bool menu{true};
    while (menu) {
        cout << "Choose an option: " << endl;
        cin >> select;
        switch(tolower(select)) {
            case 'p': {
                print_list(vec);
                break;
            }{case 's': {
                print_smallest(vec);
                break;
            }}
            {case 'l': {
                print_largest(vec);
                break;
            }}
            {case 'q': {
                cout << "Adios" << endl;
                menu = false;
                break;
            }}
            {case 'm': {
                average_list(vec);
                break;
            }}
            {case 'f': {
                clear_list(vec);
                break;
            }}
            {case 'a': {
                add_list(vec);
                break;
            }}
            {default: {
                cout << "Invalid option" << endl;
                break;
            }}
        }
    }
    return 0;
}

//---------------------------------------Definitions---------------------------------------------//
void add_list(vector<int> &vec) {
    int element{0};
    while(true) {
        cout << "Insert element to the list:" << endl;
        if (!(cin >> element)) {
            cout << "Invalid data type!" << endl;
            cin.clear();
            cin.ignore();
        } 
        else {              
            vec.push_back(element);
            cout << element << " added succesfully to the list!" << endl;
            break;
        }
    }
}

void print_list(const vector<int> &vec) {
    if (vec.empty()) {
        cout << "List is empty" << endl;
    }
    else {
        cout << "[ ";
        for (auto i : vec) {
            cout << i << " ";
        }
        cout << "]" << endl;
    }
}

void print_smallest(const vector<int> &vec) {
    int smallest{vec[0]};
    for (int i{0};i < vec.size() ;i++) {
            if (vec[i] <= smallest)
                smallest = vec[i];
    }
    cout << "The smallest number is: " << smallest << endl;
}

void print_largest(const vector<int> &vec) {
    int largest{vec[0]};
    for (int i{0};i < vec.size() ;i++) {
            if (vec[i] >= largest)
                largest = vec[i];
        }
    cout << "The largest number is: " << largest << endl;
}

void average_list(const vector<int> &vec){
    float mean{0};
    for (auto i : vec)
        mean += i;
    cout << "Average is: " << mean/vec.size() << endl;
}

void clear_list(vector<int> &vec) {
    vec.clear();
    cout << "List is now flushed!" << endl;
}