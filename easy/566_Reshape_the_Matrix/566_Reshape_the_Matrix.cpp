class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int m = nums.size();
        int n = nums[0].size();
        if (m * n != r * c)
            return nums;
        //vector<vector<int>> ans;
        
        vector<vector<int>> ans(r, vector<int>(c, 0));  // initialize
        int product = m * n;
        
        for (int i = 0; i < product; i++)
            ans[i / c][i % c] = nums[i / n][i % n];
        
        return ans;      
    }
};