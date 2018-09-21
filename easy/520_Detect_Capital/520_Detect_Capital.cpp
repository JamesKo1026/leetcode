class Solution {
public:
    bool detectCapitalUse(string word) {
        if (word.size() <= 1)   return true;    // only a charactor is definitely right
        
        for (int i = 0; i < word.size(); i++){
            int temp = 0;
            
            if ('a' <= word[0] && word[0] <= 'z'){
                while (temp + 1 < word.size()){
                    temp++;
                    if (word[temp] < 'a' || word[temp] > 'z')   return false;
                }
            } else if ('A' <= word[0] && word[0] <= 'Z'){
                if ('A' <= word[1] && word[1] <= 'Z'){
                    while (temp + 1 < word.size()){
                        temp++;
                        if (word[temp] < 'A' || word[temp] > 'Z')   return false;
                    }
                } else {
                    while (temp + 1 < word.size()){
                        temp++;
                        if (word[temp] < 'a' || word[temp] > 'z')   return false;
                    } 
                }
            }
        }
        return true;
    }
};