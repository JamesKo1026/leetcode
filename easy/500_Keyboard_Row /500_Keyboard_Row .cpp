class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        for (int i = 0; i < words.size(); i++){
            int j = 0;
            int flag;
            if (words[i][j] == 'Q' || words[i][j] == 'W' || words[i][j] == 'E' || words[i][j] == 'R' || words[i][j] == 'T' || words[i][j] == 'Y' || words[i][j] == 'U' || words[i][j] == 'I' || words[i][j] == 'O' || words[i][j] == 'P' || words[i][j] == 'q' || words[i][j] == 'w' || words[i][j] == 'e' || words[i][j] == 'r' || words[i][j] == 't' || words[i][j] == 'y' || words[i][j] == 'u' || words[i][j] == 'i' || words[i][j] == 'o' || words[i][j] == 'p'){
                flag = 0;
                j++;
                while (j < words[i].size()){
                    if (words[i][j] != 'Q' && words[i][j] != 'W' && words[i][j] != 'E' && words[i][j] != 'R' && words[i][j] != 'T' && words[i][j] != 'Y' && words[i][j] != 'U' && words[i][j] != 'I' && words[i][j] != 'O' && words[i][j] != 'P' && words[i][j] != 'q' && words[i][j] != 'w' && words[i][j] != 'e' && words[i][j] != 'r' && words[i][j] != 't' && words[i][j] != 'y' && words[i][j] != 'u' && words[i][j] != 'i' && words[i][j] != 'o' && words[i][j] != 'p'){
                        flag++;
                    }
                    j++;
                }
                //cout << flag << endl;
            }
            else if (words[i][j] == 'A' || words[i][j] == 'S' || words[i][j] == 'D' || words[i][j] == 'F' || words[i][j] == 'G' || words[i][j] == 'H' || words[i][j] == 'J' || words[i][j] == 'K' || words[i][j] == 'L' || words[i][j] == 'a' || words[i][j] == 's' || words[i][j] == 'd' || words[i][j] == 'f' || words[i][j] == 'g' || words[i][j] == 'h' || words[i][j] == 'j' || words[i][j] == 'k' || words[i][j] == 'l'){
                flag = 0;
                j++;
                while (j < words[i].size()){
                    if (words[i][j] != 'A' && words[i][j] != 'S' && words[i][j] != 'D' && words[i][j] != 'F' && words[i][j] != 'G' && words[i][j] != 'H' && words[i][j] != 'J' && words[i][j] != 'K' && words[i][j] != 'L' && words[i][j] != 'a' && words[i][j] != 's' && words[i][j] != 'd' && words[i][j] != 'f' && words[i][j] != 'g' && words[i][j] != 'h' && words[i][j] != 'j' && words[i][j] != 'k' && words[i][j] != 'l'){
                        flag++;
                    }
                    j++;
                }
                //cout << flag << endl;
            }
            else if (words[i][j] == 'Z' || words[i][j] == 'X' || words[i][j] == 'C' || words[i][j] == 'V' || words[i][j] == 'B' || words[i][j] == 'N' || words[i][j] == 'M' || words[i][j] == 'z' || words[i][j] == 'x' || words[i][j] == 'c' || words[i][j] == 'v' || words[i][j] == 'b' || words[i][j] == 'n' || words[i][j] == 'm'){
                flag = 0;
                j++;
                while (j < words[i].size()){
                    if (words[i][j] != 'Z' && words[i][j] != 'X' && words[i][j] != 'C' && words[i][j] != 'V' && words[i][j] != 'B' && words[i][j] != 'N' && words[i][j] != 'M' && words[i][j] != 'z' && words[i][j] != 'x' && words[i][j] != 'c' && words[i][j] != 'v' && words[i][j] != 'b' && words[i][j] != 'n' && words[i][j] != 'm'){
                        flag++;
                    }
                    j++;
                }
                //cout << flag << endl;
            }
            if (!flag)
                ans.push_back(words[i]);
        }
        return ans;

    }
};