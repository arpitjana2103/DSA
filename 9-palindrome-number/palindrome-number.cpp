class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        long int rev = 0;
        int xClone = x;

        while(x != 0){
            int digit = x % 10;
            x = x / 10;
            rev = rev * 10 + digit;
        }

        cout << rev << ", " << xClone << endl;
        cout << (static_cast<int>(rev) == xClone) << endl;


        return static_cast<int>(rev) == xClone;
    }
};