class Solution {
public:
    int hammingDistance(int x, int y) {
        unsigned val = x ^ y;
        int dis = 0;
        while (val){
            dis++;
            val &= val - 1;
        }
        return dis;
    }
};