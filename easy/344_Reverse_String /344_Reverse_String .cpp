/*
class Solution {
public:
    string reverseString(string s) {
        string ans = "";
        for (int i = s.size() - 1; i >= 0; i--){
            ans += s[i];
        }
        return ans;
    }
};
*/

// porbably faster
class Solution {
public:
    string reverseString(string s) {
        int head = 0, tail = s.size() - 1;
        while (head < tail){
            swap(s[head++], s[tail--]);
        }
        return s;
    }
};