class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> m;
        for (auto num : nums)
            m[num]++;
        
        for (auto num : nums)
            if (m[num] > 1) return true;
        
        return false;
    }
};