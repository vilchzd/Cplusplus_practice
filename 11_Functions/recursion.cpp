#include <iostream>
#include <string>
using namespace std;

int sum_of_digits(int n) {
    // Base case: If n is 0, return 0
    if (n == 0) {
        return n;
    } else {
        // Recursive case: Return the sum of digits of n/10 plus the last digit of n
        cout << n << endl;
        return sum_of_digits(n/10) + n % 10;
    }
}

int main() {
    int number = 5678;
    cout << "Sum of digits of " << number << " is: " << sum_of_digits(number) << endl;
    return 0;
}
