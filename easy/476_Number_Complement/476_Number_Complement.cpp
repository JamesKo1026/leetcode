// more simple but would get TLE
/*
class Solution {
public:
    int findComplement(int num) {
        int temp = 1;
        
        while (1){
            temp <<= 1;
            if (temp > num)    break;
        }
        
        int ans = num ^ (temp - 1);
        return ans;
    }
};
*/

class Solution {
public:
    int findComplement(int num) {
        int temp = num;
        int index = 2;
        
        while (temp >> 1){
            temp >>= 1;
            index <<= 1;
        }
        return index - num - 1;
    }
};