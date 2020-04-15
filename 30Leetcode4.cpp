#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void moveZeroes(vector<int>& nums);

int main() {
    int num;
    cin >> num;
    vector<int> nums;
    for(int i = 0; i < num; i++) {
        int in;
        cin >> in;
        nums.push_back(in);
    }
    moveZeroes(nums);
    for(int i : nums) {
        cout << i << ", ";
    }
    return 0;
}

void moveZeroes(vector<int>& nums) {
    int cap = nums.size();
    for(int i = 0; i < cap; i++) {
        if(nums[i] == 0) {
            nums.erase(nums.begin() + i);
            nums.push_back(0);
            i--;
            cap--;
        }
    }
}

// Alternate Solution which is faster due to no erase method call
/**void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    int numNonZeroes = 0;
    for(int i = 0; i < n; i++) {
        if(nums[i] != 0) {
            nums[numNonZeroes] = nums[i];
            numNonZeroes++;
        }
    }
    for(int i = numNonZeroes; i < n; i++) {
        nums[i] = 0;
    }
}**/

