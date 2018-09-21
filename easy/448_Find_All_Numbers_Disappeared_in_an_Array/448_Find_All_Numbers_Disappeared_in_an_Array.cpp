/*
// intuitive solution
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> numbers;
        vector<int> ans;
        for (auto&i : nums)
            numbers.insert(i);
        for (int i = 1; i <= nums.size(); i++){
            auto got = numbers.find(i);
            if (got == numbers.end())   ans.push_back(i);   // if can't find the number in the set, push in the vector which is going to be returned
        }
        return ans;
    }
};
*/

// solution designed by Ren.W
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        
        // if certain number i exists, the corresponding nums[i] will be convert to a negative one. Then you loop to find all those that are still positive ones, which will be non-existing.
        for (int i = 0; i < nums.size(); i++){
            int temp = abs(nums[i]) - 1;
            nums[temp] = -abs(nums[temp]);
        }
            
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] > 0)    ans.push_back(i + 1);
        }
        return ans;
    }
};