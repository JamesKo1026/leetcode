class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())   return false;
        unordered_map<char, int> h;
        
        for (int i = 0; i < s.size(); i++){
            h[s[i]]++;
            h[t[i]]--;
        }
        
        for (auto it = h.begin(); it != h.end(); it++)
            if (it->second != 0)    return false;
        
        return true;
    }
};