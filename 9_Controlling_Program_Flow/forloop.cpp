#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;


main() {
    
    vector<int> vec {1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700};

    //cout << "size is: " << vec.size() << endl ;
    // int count{0};
    // for (int i{0}; i < vec.size(); ++i) {
    //     if (vec.at(i) % 3 == 0 || vec.at(i) % 5 == 0) {
    //     cout << vec.at(i) << endl;
    //     count += 1;
    //     }
    // }

    // cout << "--------------------------------------" << endl;
    // cout << "Count: " << count << endl;
    int sum{0};
    for (auto v : vec) {
        cout << sum << endl;
        sum += v;
    } 
    cout << fixed << setprecision(1);
    cout << sum / vec.size() << endl;
    return 0;
}