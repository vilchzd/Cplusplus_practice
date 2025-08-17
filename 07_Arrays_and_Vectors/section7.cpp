#include <iostream>
#include <vector>
using namespace std;

main () {
    int array_1 [5] {5,7,8,9,7}; // {} iniciar en 0 todo
    // cin >> array_1[0];
    cout << array_1[0] << endl;
    
    vector <int> dogo_vector (5);
    vector <float> dogo_float (5,45.3);


    cout << dogo_float[4] * 5 << endl;     
    cin >> dogo_float.at(1);
    dogo_float.push_back(58.5);
    cout << dogo_float.capacity() << endl;
    
    
    
    return 0;

}