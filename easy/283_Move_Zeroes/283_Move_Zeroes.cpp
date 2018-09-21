/*
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZero_i = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] != 0)
                nums[nonZero_i++] = nums[i];    // collecting all non-zero value, push them front the array
        }
        cout << nonZero_i << endl;
        //nonZero_i++;
        for (; nonZero_i < nums.size(); nonZero_i++){
            nums[nonZero_i] = 0;
        }
        
    }
};
*/
// powerful solution by youbuer
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        fill(remove(nums.begin(), nums.end(), 0), nums.end(), 0);
    }
};