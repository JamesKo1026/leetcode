/* 
// too slow
class Solution {
public:
    char findTheDifference(string s, string t) {
        for (int i = 0; i < s.size(); i++){
            for (int j = 0; j < t.size(); j++){
                if (s[i] == t[j]){
                    s[i] = 'A';
                    t[j] = 'A';
                }
                    
            }
        }
        for (int k = 0; k < t.size(); k++){
            if (t[k] != 'A')    return t[k];
        }
        //return 'b';
    }
}; 
*/

// brilliant solution designed by yanchao_hust
class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans = 0;
        for (char i : s)
            ans ^= i;
        for (char j : t)
            ans ^= j;
        return ans;
    }
};