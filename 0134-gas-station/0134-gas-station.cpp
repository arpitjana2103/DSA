class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {

        int fuelLeft = 0;
        int currFuel = 0;
        int res = 0;
        
        for(int i = 0; i<gas.size(); i++){
            int diff = gas[i] - cost[i];
            fuelLeft += diff;
            currFuel += diff;

            if(currFuel < 0){
                currFuel = 0;
                res = i + 1;
            }

        }

        if(fuelLeft < 0) return -1;
        else return res;
    }
};