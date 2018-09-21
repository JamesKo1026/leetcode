/*
class Solution {
public:
    bool hasAlternatingBits(int n) {
        int pre_last_bit = n % 2;
        n /= 2;
        while (n > 0){
            
            int curr_last_bit = n % 2;
            if (pre_last_bit == curr_last_bit)  return false;
            
            pre_last_bit = curr_last_bit;
            n /= 2;
        }
        return true;
        
    }
};
*/
// magic bits solution
class Solution {
public:
    bool hasAlternatingBits(int n) {
        n = n ^ (n >> 1);
        return (n & (n + 1)) == 0;
        
    }
};