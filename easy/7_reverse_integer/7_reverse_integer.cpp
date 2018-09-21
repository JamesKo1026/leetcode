class Solution {
public:
    int reverse(int x) {
        // 2^31 = 2147483648 - 1
        // -2^31 = -2147483648
        // handling the overflow
        if (x >= 2147483647) return 0;
        if (x <= -2147483648) return 0;
        
        int flag = 0;
        if (x < 0){
            x = -x;
            flag = 1;
        }
        
        int digits = 0;
        //cout << x;
        int ans = 0;
        int res = 0;
        while (digits < 9 && x){
            digits++;
            ans *= 10;
            res = (x % 10);
            ans += res;
            x /= 10;
        }
        cout << digits << endl;
        cout << ans << endl; 
        // deal with last number
        if (x){
            if (ans > 214748364) return 0; // remember not to set the threshold to '2147483647'
            ans *= 10;
            ans += x;
        }
        
        if (flag) return -ans;
        else return ans;
        
        
    }
};