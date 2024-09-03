class Solution {
public:
bool canPlaceFlowers(const vector<int>& flowerbed, int n) {
        int count = 0;
        int size = flowerbed.size();
        
        for (int i = 0; i < size; ++i) {
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == size - 1 || flowerbed[i + 1] == 0)) {
                count++;
                i++; // Skip the next spot as it's adjacent to the planted one
                if (count >= n) {
                    return true;
                }
            }
        }
        
        return count >= n;
    }
};