#include <iostream>
#include <vector>
using namespace std;

int calculate_pairs(vector<int> vec) {
    //----WRITE YOUR CODE BELOW THIS LINE----
    int result{0};
    if (!vec.empty() && vec.size() >= 2) {
        for (int i{0};i < vec.size() ;i++) {
            for (int j{i+1}; j < vec.size() ;j++) {
                result += vec[i]*vec[j];
                //cout << "-----------" << "\n" << vec[i] << " * "<< vec[j] << " = " << result << endl; 
            }
        }
    }
    //----WRITE YOUR CODE ABOVE THIS LINE----
    return result;
}

int main() {
    vector<int> vec {1, 2, 3, 4, 5 , 6};
    cout << calculate_pairs(vec) << endl;
    return 0;
}