class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;
        vector<int>temp_x = {0, 1, 0, -1};  // grid + (0,1) / (1,0) / (0,-1) / (-1,0)
        vector<int>temp_y = {1, 0, -1, 0};
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                if (grid[i][j] > 0){
                    ans += 2;
                    
                    for (int k = 0; k < 4; k ++){
                        int a = i + temp_x[k];
                        int b = j + temp_y[k];
                        int neighbor = 0;
                        if (0 <= a && a < m && 0 <= b && b < n) // check boundary
                            neighbor = grid[a][b];
                        
                        if (grid[i][j] - neighbor > 0)  // if the neighbor cubes more than grid[i][j], can't calcuate the surface where merge
                            ans += (grid[i][j] - neighbor);
                        else
                            ans += 0;
                    }  
                    
                }
                     
            }
        }
        return ans;
    }
};