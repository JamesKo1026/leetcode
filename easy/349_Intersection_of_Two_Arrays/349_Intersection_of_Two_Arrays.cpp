class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.empty() || nums2.empty())   return {};
        unordered_set<int> n1(nums1.begin(), nums1.end());
         
        vector<int> ans;
        for (auto&i : nums2){
            if (n1.erase(i) > 0)    ans.push_back(i);
        }
        
        return ans;
    }
};