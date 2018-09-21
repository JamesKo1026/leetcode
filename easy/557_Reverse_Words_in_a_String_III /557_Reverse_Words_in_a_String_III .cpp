class Solution {
public:
    string reverseWords(string s) {
        //string ans = "";
        int head = 0, tail = 0;
        for (int i = 0; i < s.size(); i++){
            
            // handle the normal situation
            if (i == s.size() - 1){
                tail = i;
                while (head < tail)
                    swap(s[head++], s[tail--]);
            }
            
            // handle the last word
            if (s[i] == ' '){
                tail = i - 1;
                while (head < tail){
                    //cout << s[head] << s[tail] << endl;
                    swap(s[head++], s[tail--]);
                }
                head = i + 1;
            }
            
        }
        return s;    
    }
};

