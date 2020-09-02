#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int q;
    cin >> n >> q;
    vector<int> array[n];
    for (int i = 0; i < n; i++){
        int length;
        cin >> length;
        vector<int> v (length);
        for (int j = 0; j < length; j++){
            int t;
            cin >> t;
            v.at(j) = t;
        }
        array[i] = v;
    }
    for (int k = 0; k < q; k++){
        int first;
        int second;
        cin >> first >> second;
        cout << array[first].at(second) << "\n";
        
    }
    return 0;
}
