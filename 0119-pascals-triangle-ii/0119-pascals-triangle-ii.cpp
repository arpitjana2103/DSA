class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res(rowIndex + 1, 1);

        for(int i = 1; i<=rowIndex - 1; i++){

            int prev = 0;

            for(int j = 0; j<=i; j++){
                int temp = res[j];
                res[j] += prev;
                prev = temp;
            }
        }

        return res;
    } 
};