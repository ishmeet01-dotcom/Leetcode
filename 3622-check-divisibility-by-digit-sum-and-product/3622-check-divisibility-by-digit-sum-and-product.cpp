class Solution {
public:
    bool checkDivisibility(int n) {
        int original = n, digitSum = 0, digitProduct = 1;
    while (n > 0) {
        int digit = n % 10;
        digitSum += digit;
        digitProduct *= digit;
        n /= 10;
    }
    return original % (digitSum + digitProduct) == 0;
    }
};