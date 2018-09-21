/*
class Solution {
public:
    bool rotateString(string A, string B) {
        if (A.empty() && B.empty())   return true;
        string temp;
        for (int i = 0; i < A.size(); i++){
            temp = A.substr(i) + A.substr(0, i);
            if (temp.compare(B) == 0)   return true;
        }
        return false;
    }
};
*/
// unbelievable solution designed by Lee215
class Solution {
public:
    bool rotateString(string A, string B) {
        return A.size() == B.size() && (A + A).find(B) != string::npos;
    }
};