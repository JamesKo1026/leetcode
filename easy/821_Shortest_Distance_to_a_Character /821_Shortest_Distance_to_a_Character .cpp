/*
class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        int n = S.size();
        vector<int> ans(n, n);   //  initialize all elements to n
        for (int i = 0; i < n ; i++)
            if(S[i] == C) ans[i] = 0; // find the position of C
        
        for (int i = 1; i < n; i++)
            ans[i] = min(ans[i], ans[i - 1] + 1);
        
        for (int i = n - 2; i >= 0; i--)
            ans[i] = min(ans[i], ans[i + 1] + 1);

        return ans;
    }
};
*/

class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        int n = S.size();
        vector<int> ans(n, n);
        int pos = -n;
        for (int i = 0; i < n; i++){
            if (S[i] == C)
                pos = i;
            ans[i] = min(ans[i], abs(i - pos));
        }
        for (int i = n - 1; i >= 0; i--){
            if (S[i] == C)
                pos = i;
            ans[i] = min(ans[i], abs(i - pos));
        }

        return ans;
    }
};