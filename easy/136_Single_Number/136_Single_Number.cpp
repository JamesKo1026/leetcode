class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        // reference by Ivantsang brilliant solution!!
        // core of algo:
        // using XOR, if one number appear twice, it will add and substract each time
        // so the final remaining value will be the one who can't get pair 'add, sub'
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
            ans ^= nums[i];
        return ans;
    }
};