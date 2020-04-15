#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isHappy(int n);
int sumDigits(int n);

int main() {
    int num;
    cin >> num;
    cout << isHappy(num);
    return 0;
}

bool isHappy(int n) {
    unordered_set<int> visitednums;
    for(int i = 0; i < 19; i++) {
        if (n == 1) {
            return true;
        }
        n = sumDigits(n);
    }
    return false;
}

int sumDigits(int n) {
    int sum = 0;
    while(n) {
        int digit = n % 10;
        n /= 10;
        sum += digit * digit;
    }
    return sum;
}

