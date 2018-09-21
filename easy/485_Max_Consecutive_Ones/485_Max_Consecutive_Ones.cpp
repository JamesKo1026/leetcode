/* shit code
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int start = 0;
        int dis;
        int max_dis = 0;
        for (int i = 0; i < nums.size(); i++){
            dis = 0;    // refresh distance every time
            if (nums[i] == 1){
                dis++;
                int temp = i+1;
                while (temp < nums.size()){
                    if (nums[temp] == 1){
                        dis++;
                        temp++;
                        max_dis = max(dis, max_dis);
                    }
                    else{
                        max_dis = max(dis, max_dis);
                        dis = 0;
                        break;
                    }
                }
            }
            cout << dis << endl;
            if (dis == nums.size()) break;    // handle the instance like: 11, 1111, 11111 (all of 1)
        }
        return max(max_dis, dis);
        
    }
};
*/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums){
        int max_dis = 0;
        int dis = 0;
        for (auto& n : nums){
            if (n == 1){
                max_dis = max(++dis, max_dis);
            }
            else
                dis = 0;
        }
        return max_dis;
    }
};

