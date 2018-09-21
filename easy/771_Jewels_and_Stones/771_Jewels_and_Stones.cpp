class Solution {
public:
    int numJewelsInStones(string J, string S) {
        if (J.empty() || S.empty())
            return 0;
        int cnt = 0;
        for (int i = 0; i< J.length(); i++){
            for (int j = 0; j< S.length(); j++){
                if (J[i] == S[j]){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};