class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int CurrSum = 0, MaxSum = INT_MIN;

        for(int val : nums) {
            CurrSum += val;
            MaxSum = max(CurrSum, MaxSum);
            
            if(CurrSum < 0) {
                CurrSum = 0;
            }
        }
        return MaxSum;
    }
};
