class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int per = 0;
        //int cnt = 0;
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                if (grid[i][j]){
                    per += 4;
                    //cnt++;
                    if (j - 1 >= 0 && grid[i][j - 1])    per -= 1;   // top
                    if (i + 1 <= m - 1 && grid[i + 1][j])    per -= 1;   // right
                    if (j + 1 <= n - 1 && grid[i][j + 1])    per -= 1;   // down
                    if (i - 1 >= 0 && grid[i - 1][j])    per -= 1;   //  left
                }  
            }
            //cout << cnt << endl;
            //cout << per << endl;
        }
        return per;
        
    }
};