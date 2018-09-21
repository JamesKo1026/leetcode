class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        vector<int> ans(2, 0);
        int sumA = 0, sumB = 0;
        sumA = accumulate(A.begin(), A.end(), 0);
        sumB = accumulate(B.begin(), B.end(), 0);
        
        int diff = (sumA - sumB) / 2;
        
        unordered_set<int> map(A.begin(), A.end());
        
        for (int i = 0; i < B.size(); i++){
            // solution 1
            //if (map.count(B[i] + diff))
            //    return {B[i] + diff, B[i]};
            
            // solution 2 (faster)
            if (map.find(B[i] + diff) != map.end())
                return {B[i] + diff, B[i]};
        }
        
        return {};
    }
};