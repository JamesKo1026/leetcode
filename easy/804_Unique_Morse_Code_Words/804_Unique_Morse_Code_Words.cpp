/*class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse_code = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> ans;
        string morse_word = "";
        for (int i = 0; i < words.size(); i++){
            morse_word = "";
            for (int j = 0; j < words[i].size(); j++){
                morse_word += morse_code[words[i][j] - 'a'];
            }
            ans.insert(morse_word);
        }
        return ans.size();
    }
};
*/
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse_code = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> ans;
        string morse_word = "";
        for (auto word : words){
            morse_word = "";
            for (auto charactors : word)
                morse_word += morse_code[charactors - 'a'];
            ans.insert(morse_word);
        }
        return ans.size();
    }
};