class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        
        string combine = (A + " " + B + " ");
        vector<string> temp;
        // vector<string> temp_B = B.split(" ");
        int start = 0;
        for (int i = 0; i < combine.size(); i++){
            if (combine[i] == ' '){
                temp.push_back(combine.substr(start, i-start));
                start = i + 1;
            }
        }
        
        unordered_map<string, int> string_map;
        for (auto &i : temp)    string_map[i]++;
        
        
        
        // brilliant solution written by Lee215
        /*
        unordered_map<string, int> string_map;
        istringstream iss(A + ' ' + B);
        string S;
        while(iss >> S) string_map[S]++;
        */
        
        vector<string> ans;
        for (auto &j : string_map){
            if (j.second == 1) ans.push_back(j.first);
        }
        return ans;
        
    }
};