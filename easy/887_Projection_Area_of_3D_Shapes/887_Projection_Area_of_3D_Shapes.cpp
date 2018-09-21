class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int xy = 0, yz = 0, xz = 0;
        int m = grid.size();
        int n = grid[0].size();
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                if (grid[i][j] != 0)    xy++;
                if (j == n - 1){
                    //int temp_yz = j;
                    int max1 = -1;
                    for (int k = 0; k <= j;     k++){
                        if (grid[i][k] > max1)  max1 = grid[i][k]; 
                    }
                    yz += max1;
                    /*
                    while(grid[i][temp_yz] > max1){
                        max1 = grid[i][temp_yz];
                        if (temp_yz > 0)    temp_yz--; // temp keep shifting left
                    }   
                    yz += max1;
                    */
                }
                if (i == m - 1){
                    //int temp_xz = i;
                    int max2 = -1;
                    for (int k = 0; k <= i; k++){
                        if (grid[k][j] > max2)  max2 = grid[k][j]; 
                    }
                    xz += max2;
                    
                    /*
                    while(grid[temp_xz][j] > max2){
                        max2 = grid[temp_xz][j];
                        if (temp_xz > 0)    temp_xz--; // temp keep shifting up
                    }   
                    xz += max2;
                    */
                }  
            }
        }
        cout << xy << yz << xz << endl;
        return xy+yz+xz;
    }
};