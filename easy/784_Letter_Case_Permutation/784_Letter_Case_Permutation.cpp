class Solution {
public:
    void permute(string S, vector<string>& ans, int index){
        
        ans.push_back(S);
        //cout << S << endl;
        
        if (index >= S.size())  return;
        
        for (int i = index; i < S.size(); i++){
            if (isalpha(S[i])){
                if ('a' <= S[i] && S[i] <= 'z') S[i] -= ('a' - 'A');    // lowerercase to uppercase, vice versa
                else    S[i] += ('a' - 'A');
                // cout << "+" << S << endl;
                permute(S, ans, i + 1); // backtracking 
                // cout << "-" << S << endl;
                if ('a' <= S[i] && S[i] <= 'z') S[i] -= ('a' - 'A');    // lowercase to uppercase, vice versa
                else    S[i] += ('a' - 'A');
            }
        }
        //cout << S << endl;
        
    }
    
    vector<string> letterCasePermutation(string S) {
        vector<string> ans;
        permute(S, ans, 0);
        
        return ans;
    }
};