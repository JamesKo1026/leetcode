class Solution {
public:
    int numSpecialEquivGroups(vector<string>& A) {
        set<pair<string, string>> s;
        for (auto&str : A){
            
            pair<string, string> p;
            for (int i = 0; i < str.size(); i++){
                if (i % 2 == 0)
                    p.first += str[i];
                else
                    p.second += str[i];
            }
            sort(p.first.begin(), p.first.end());
            sort(p.second.begin(), p.second.end());
            s.insert(p);
            cout << p.first << endl;
            cout << p.first << p.second << endl;
        }
        return s.size();
    }
};