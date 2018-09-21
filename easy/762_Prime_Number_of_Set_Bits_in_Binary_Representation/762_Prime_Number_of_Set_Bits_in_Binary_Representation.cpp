class Solution {
public:
    int countPrimeSetBits(int L, int R) {
        if (L == 1 && R == 1)   return 0;
        
        int cnt_prime = 0;
        for (int i = L; i <= R; i++){
            
            int cnt_bit = 0;
            int temp = i;
            while(temp){
                cnt_bit += (temp & 1);
                temp >>= 1;
            }
            
            if (cnt_bit == 1)   continue;   // 1 isn't a prime number
            
            int flag = 0;
            for (int j = 2; j * j <= cnt_bit; j++){   //  check prime
                if (cnt_bit % j == 0){
                    flag = 1;
                    break;
                }
            }
            
            if (!flag)  cnt_prime++;        
        }
        
        return cnt_prime;
    }
};