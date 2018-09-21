class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> m;
        //cout << (nums.size() >> 1) << endl;
        for (auto& num : nums){
            m[num]++;
            if (m[num] > (nums.size() >> 1))  return num;
        }
        return NULL;
    }
};