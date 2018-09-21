/*
class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int flag;
        for (int i = 0; i < matrix.size(); i++){
            flag = 0;
            for (int j = 0; j < matrix[i].size(); j++){
                if (i + 1 > matrix.size() - 1 || j + 1 > matrix[i].size() - 1)  break;
                if (matrix[i][j] != matrix[i + 1][j + 1]){
                    flag = 1;
                    break;
                }
                if (flag)   break;
            }
            if (flag)   break;
        }
        return (flag ? false : true);
    }
};
*/

//  clean code version
class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for (int i = 1; i < matrix.size(); i++)
            for (int j = 1; j < matrix[0].size(); j++)
                if (matrix[i][j] != matrix[i - 1][j - 1])
                    return false;
        return true;
    }
};