class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        if (A.size() == 1)  return true;
        
        int flag = 0, incre = 0, decre = 0;
        for (int i = 1;i < A.size(); i++){
            if (A[i - 1] - A[i] == 0)   continue;
            
            if (A[i - 1] - A[i] < 0){
                incre = 1;   // increase
            } 
            else    decre = 1;  // increase
        }
        if (incre && decre) return false;
        return true;
    }
};