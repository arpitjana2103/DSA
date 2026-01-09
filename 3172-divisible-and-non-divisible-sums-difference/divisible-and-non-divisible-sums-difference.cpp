class Solution {
public:
    int differenceOfSums(int n, int m) {
        // count of numbers divisible by m be x
        // sum of 1 to n be a
        const int a = n * (n + 1) / 2;

        const int x = n / m;
        const int num2 = m * x * (x + 1) / 2;
        const int num1 = a - num2;

        return num1 - num2;
    }
};
