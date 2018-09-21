class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string, int>map_list;
        for (auto cp : cpdomains){
            int space_pos = cp.find(' ');
            int num = stoi(cp.substr(0, space_pos));    // 9001
            string s = cp.substr(space_pos + 1, cp.size() - space_pos - 1); // discuss.leetcode.com
            for (int i = 0; i < s.size(); i++)
                if (s[i] == '.')    map_list[s.substr(i + 1, s.size() - i - 1)] += num;  // 9001 : leetcode.com, 9001 : com; 
            map_list[s] += num; // 9001 : discuss.leetcode.com
        }
        vector<string> ans;
        for (auto j : map_list)
            ans.push_back(to_string(j.second) + " " + j.first);
        return ans;
    }
};