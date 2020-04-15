#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int maxSubArray(vector<int>& nums);

int main() {
    int num;
    cin >> num;
    vector<int> nums;
    for(int rep = 0; rep < num; rep++) {
        int in;
        cin >> in;
        nums.push_back(in);
    }
    cout << "Maximum Subarray Sum: " << maxSubArray(nums);
    return 0;
}

int maxSubArray(vector<int>& nums) {
    int sum = INT_MIN;
    int curr = 0;
    for(int i : nums) {
        curr += i;
        sum = max(sum, curr);
        curr = max(0, curr);
    }
    return sum;
}

