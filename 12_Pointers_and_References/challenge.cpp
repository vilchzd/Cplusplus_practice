#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void print(const int[], size_t);
int* apply_all(const int[], const int[], size_t, size_t);

int main () {
    const size_t array1_size {5};
    const size_t array2_size {3};
    int array1 []{1,2,3,4,5};
    int array2 []{10,20,30};
    cout << "Array 1: ";
    print(array1, array1_size);
    cout << "Array 2: ";
    print(array2, array2_size);
    int* results = apply_all(array1, array2, array1_size, array2_size);
    constexpr size_t results_size{array1_size * array2_size};
    cout << "Result: ";
    print(results, results_size); 
    delete [] results;
    return 0;
}


int* apply_all(const int array1[], const int array2[], size_t size_1, size_t size_2) {
    int *memory{nullptr};
    //int k{0};
    memory = new int [size_1 * size_2];
    for (size_t i{0}; i < size_1 ; i++) {
        for (size_t j{0}; j < size_2; j++) {
            memory[i * size_2 + j] = array1[i]*array2[j];
          //memory[k] = array1[i]*array2[j];
          //k++
        }
    }
    return memory;
}

void print(const int array[], size_t size) {
    cout << "[";
    for (int i{0}; i < size; i++) {
        cout << array[i];
        if (i != size - 1) {
            cout << " ";
        }
    }
    cout << "]";
    cout << endl;
}
