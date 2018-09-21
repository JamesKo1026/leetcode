class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        // int max_temp = 0;
        int max_area = 0;
        for (int i = 0; i < grid.size(); i++){
            for (int j = 0; j < grid[0].size(); j++){
                if (grid[i][j] == 1){
                    max_area = max(CaculateArea(i, j, grid), max_area);
                }
            }
        }
        return max_area;
    }
    
    int CaculateArea(int i, int j, vector<vector<int>>& grid){
        if (i >= 0 && i <= grid.size() - 1 && j >= 0 && j <= grid[0].size() - 1 && grid[i][j] == 1){    // check the boundary first, then check whether grid[i][j] is 1 or not
            grid[i][j] = 0;
            return 1 + CaculateArea(i + 1, j, grid) + CaculateArea(i, j + 1, grid) + CaculateArea(i - 1, j, grid) + CaculateArea(i, j - 1, grid);
        }
        return 0;
    }
};