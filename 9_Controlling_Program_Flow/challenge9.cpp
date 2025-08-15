#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

/* int calculate_pairs(vector<int> vec) {
    int result{0};
    if (!vec.empty() && vec.size() >= 2) {
        for (int i{0};i < vec.size() ;i++) {
            for (int j{i+1}; j < vec.size() ;j++) {
                result += vec[i]*vec[j];
                //cout << "-----------" << "\n" << vec[i] << " * "<< vec[j] << " = " << result << endl; 
            }
        }
    }
    return result;
} */

#include <iostream>
#include <vector>

using namespace std;

#include <iostream>
#include <vector>

using namespace std;

#include <iostream>
#include <vector>

using namespace std;

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
    int element{0};
    while (menu) {
        cout << "Choose an option: " << endl;
        cin >> select;
        switch(tolower(select)) {
            {case 'p': {
                if (vec.empty()) {
                    cout << "List is empty" << endl;
                    break;
                }
                else {
                    cout << "[ ";
                    for (auto i : vec) {
                        cout << i << " ";
                    }
                    cout << "]" << endl;
                }break;
                }}
            {case 's': {
                int smallest{vec[0]};
                for (int i{0};i < vec.size() ;i++) {
                        if (vec[i] <= smallest)
                            smallest = vec[i];
                    }
                cout << "The smallest number is: " << smallest << endl;
                break;
            }}
            {case 'l': {
                int largest{vec[0]};
                for (int i{0};i < vec.size() ;i++) {
                        if (vec[i] >= largest)
                            largest = vec[i];
                    }
                cout << "The largest number is: " << largest << endl;
                break;
            }}
            {case 'q': {
                cout << "Adios" << endl;
                menu = false;
                break;
            }}
            {case 'm': {
                float mean{0};
                for (auto i : vec)
                    mean += i;
                cout << "Average is: " << mean/vec.size() << endl;
                break;
            }}
            {case 'f': {
                vec.clear();
                cout << "List is now flushed!" << endl;
                break;
            }}
            {case 'a': {
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
