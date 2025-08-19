#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
#include <iostream>
#include <numeric>

using namespace std;

int main () {
    vector<int> v {1,2,3};
    int sum{};
    sum = std::accumulate(v.begin(), v.end(), 0);
    cout << sum << endl;
    // std::reverse(v.begin(), v.end());
    std::sort(v.begin(), v.end());
    for (auto elem: v) 
        cout << elem << endl;
    return 0;
}


