
/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int it1 = 0; it1 != nums.size(); it1++){
            for (int it2 = it1 + 1; it2 != nums.size(); it2++){
                if (nums[it1]+nums[it2]==target)
                    return {it1, it2};
            }
        }

    }
};
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> NumMap;
        int numAns = 0;
        for (int i = 0; i < nums.size(); i++){
            int numAns = target - nums[i];
            auto position = NumMap.find(numAns);
            if (position != NumMap.end())
                return {position -> second, i};
            NumMap[nums[i]] = i;
        }
    }
};
