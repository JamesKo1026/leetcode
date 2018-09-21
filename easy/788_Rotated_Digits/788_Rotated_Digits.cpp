class Solution {
public:
    int rotatedDigits(int N) {
        int ans = 0;
        for (int num = 1; num <= N; num++){
            if (goodNumber(num)) ans++;
        }
        return ans;
    }
    
    bool goodNumber(int num){
        int temp = num;
        bool goodSignal = false;
        while (temp != 0){
            int digit = temp % 10;
            switch(digit){
                case 3:
                case 4:
                case 7:
                    return false;
                    break;
                case 2:
                case 5:
                case 6:                        
                case 9:
                    goodSignal = true;
                    break;
            }
            temp /= 10;
        }
        return goodSignal;
    }
    
};