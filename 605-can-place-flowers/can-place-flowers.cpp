class Solution {
public:
bool canPlaceFlowers(const vector<int>& flowerbed, int n) {
        int count = 0;
        int size = flowerbed.size();
        
        for (int i = 0; i < size; i++) {
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == size - 1 || flowerbed[i + 1] == 0)) {
                cout << i << endl;
                count++;
                i++;
            }
        }

        cout << count;
        
        return count >= n;
    }
};