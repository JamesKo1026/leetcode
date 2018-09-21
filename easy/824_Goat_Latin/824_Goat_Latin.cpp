class Solution {
public:
    string toGoatLatin(string S) {
        set<char> vowel({'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'});
        istringstream iss(S);
        string words, ans;
        int a_count = 0;
        while (iss >> words){
            // cout << words << endl;
            ans += ' ';
            if (vowel.count(words[0]) == 1){
                ans += words;
            }else{
                ans += words.substr(1);
                ans += words[0];
            }
            ans += "ma";
            
            a_count++;
            // cout << ans << endl;
            
            for (int i = 0; i < a_count ; i++)  ans += 'a';           
        }

        return ans.substr(1);
    }
};