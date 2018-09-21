// brilliant solution designed by Lee215
class Solution {
public:
    //      0001111
    //  min( 3 , 4) = 3
    //  min(cur, prev) = step_ans
    int countBinarySubstrings(string s) {
        int ans = 0;
        int cur = 1, prev = 0;
        for (int i = 1; i < s.size(); i++){
            if (s[i - 1] == s[i])
                cur++;
            else{
                ans += min(cur, prev);
                prev = cur;
                cur = 1;
            }
        }
        return ans + min(cur, prev);    // don't forget the last item
    }
};