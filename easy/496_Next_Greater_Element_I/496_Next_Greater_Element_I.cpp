class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int> ans;
        int flag;
        for (int i = 0; i < findNums.size(); i++){
            
            int j = 0;
            while(j < nums.size()){
                if (nums[j] == findNums[i]){
            
                    flag = 0;
                    int start_point = j;
                    int incre = 1;
                    int cnt = nums.size() - 1 - j;  //  cnt means how many rest of times should ne excute in comparison
                    while(cnt){
                        if (start_point+1 <= nums.size()-1 && nums[start_point+incre] > nums[start_point]){
                            ans.push_back(nums[start_point+incre]);
                            flag = 1;   // flag == 1 means it actually find the greater number than the number of the start position
                            break;
                        }
                        else    incre++;
                        cnt--;
                    }
                    if (!flag)  ans.push_back(-1);
                }
                j++;   
            }   
        }
        return ans;
    }
};