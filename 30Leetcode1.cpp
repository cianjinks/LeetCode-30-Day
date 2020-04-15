#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int singleNumber(vector<int>& nums);

int main() {
    vector<int> nums;
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        nums.push_back(n);
    }
    cout << "Solution: " << singleNumber(nums);
    return 0;
}

int singleNumber(vector<int>& nums) {
    int x = 0;
    for(auto a : nums) {
        x ^= a;
    }
    return x;
}
