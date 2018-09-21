class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int length = A.size();
        int max = 0;
        int ans = 0;
        for (int i = 0; i < length; i++){
            if (A[i] > max){
                max = A[i];
                ans = i;
            }    
        }
        return ans;
    }
};