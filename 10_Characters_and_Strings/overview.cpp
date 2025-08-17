#include <iostream>
#include <cctype>
#include <cstring>
#include <string>
using namespace std;

void strings_and_functions() {

    char first_name [40]{"Bjarne"};
    char last_name [40]{"Stroustrup"};
    char whole_name[50]{};
    size_t first_name_length{strlen(first_name)};
    size_t last_name_length{strlen(last_name)};
    strcpy(whole_name,first_name);
    strcat(whole_name,last_name);
    size_t whole_name_length{strlen(whole_name)};
    cout << "The length of the first name, " << first_name << ", is " << first_name_length << " letters long and the length of the last name, " << last_name << ", is " << last_name_length << " letters long. This means that the length of the whole name must be " << whole_name_length << " letters long.";
}

main () {
    {//char c {'a'};
    // cout << islower(c) << endl;
    // cout << isprint(c) << endl;
    // cout << isspace(c) << endl;
    // char my_name[8]{};
    // char name[20]{};
    // char lastname[10]{};
    // cout << name << endl;
    // strcpy(lastname, "Vilchez");
    // strcpy(my_name, "Frank");
    // for (auto i : my_name)
    //     cout << i << " ";
    // cout << "\n" << strlen(my_name) << endl;
    // strcpy(name,strcat(my_name,lastname));
    // cout << name << endl;
    }
    //strings_and_functions();
    string unformatted_full_name {"StephenHawking"};
    string first_name{unformatted_full_name,0,7};
    string last_name = unformatted_full_name.substr(7,7);
    string formatted_full_name = first_name + last_name;
    formatted_full_name.insert(7, " ");
    string journal_entry_1 {"Isaac Newton"};
    string journal_entry_2 {"Leibniz"};
    journal_entry_1 = journal_entry_1.substr(5);
    
    cout << formatted_full_name << journal_entry_1 << endl;
    return 0;
}

//cin.getline(char name, int number);
//strcomp(char name1, char name 2) - compare 2 strings


//object.substr(start, length)
//object.find(search string)
//object.legth(search string)

//getline(cin,whatever)


//if = (s != string::npos))