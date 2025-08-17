#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

// main () {
// int size {6}, arr[] {1,2,3,4,5,6};
//     for (int i{0}; i < size/2; i++) {
//         cout << "Iteracion: " << i << endl;
//         for (auto a : arr){
//             cout << a << " ";
//         }
//         cout << endl;
//         int temp = arr[size - (i + 1)];
//         arr[size - (i + 1)] = arr[i];
//         arr[i] = temp;
//         for (auto a : arr){
//             cout << &a << " ";
//         }
//         cout << "\n" << "********* " << endl;
//     }
    
//     return 0;
// }

int main() {
    int size = 6;
    int arr[] = {1, 2, 3, 4, 5, 6};
    
    for (int i = 0; i < size / 2; i++) {
        cout << "Iteration: " << i << endl;
        for (auto a : arr){
            cout << a << " ";
        }
        cout << endl;
        
        int temp = arr[size - (i + 1)];
        arr[size - (i + 1)] = arr[i];
        arr[i] = temp;
        
        for (int j = 0; j < size; j++){
            cout << &arr[j] << " ";
        }
        cout << "\n" << "********* " << endl;
    }
    
    return 0;
}
