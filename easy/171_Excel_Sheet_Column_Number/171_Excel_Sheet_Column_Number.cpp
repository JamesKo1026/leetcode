/*
// pow isn't a good solution
class Solution {
public:
    int titleToNumber(string s) {
        int len = s.size();
        int result = 0;
        for (char c : s){
            if (len > 1) {
                result += (c - 'A' + 1) * (pow(26, (--len)));
            }
            else    result += (c - 'A' + 1);
        }
        return result;
    }
};
*/

class Solution {
public:
    int titleToNumber(string s) {
        int len = s.size();
        int result = 0;
        for (char c : s){
            result = result * 26 + (c - 'A' + 1);
        }
        return result;
    }
};