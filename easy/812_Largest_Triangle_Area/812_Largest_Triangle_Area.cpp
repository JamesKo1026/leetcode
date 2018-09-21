class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        int m = points.size();
        // int n = points[0].size();
        double area;
        for (int i = 0; i < m; i++){    // a
            for (int j = 0; j < m; j++){    // b
                for (int k = 0; k < m; k++){    // c
                    
                    // triangle area = 0.5 * (XaYb + XbYc + XcYa - XaYc - XbYa - XcYb)
                    area = max((0.5 * (points[i][0]*points[j][1] + points[j][0]*points[k][1] + points[k][0]*points[i][1] -
                                       points[i][0]*points[k][1] - points[j][0]*points[i][1] - points[k][0]*points[j][1] )), area);         
                }
            }
           
        }
        return area;
    }
};