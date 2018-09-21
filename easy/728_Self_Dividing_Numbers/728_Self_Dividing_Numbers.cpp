/*class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        int cnt = 0;
        int length = right - left + 1;
        vector<int> arr;
        for (int i = left; i <= right; i++){
            if (i >= 1 && i <= 9)
                arr.push_back(i);
            else{
                int temp = i;
                int flag = 0;
                int res;
                while (temp){
                    res = (temp % 10);
                    if (!res || (i%res)){
                        flag++;
                        break;
                    }
                    if (flag)  break;
                    temp /= 10; 
                }
                if (!flag)
                    arr.push_back(i);   
            }
        }
        return arr;
    }
};
*/

// clean code
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> arr;
        for (int i = left, n = 0; i <= right; i++){
            for (n = i; n > 0; n /= 10){
                int res = n % 10;
                if ((!res) || (i % res))    break;  //  if res == 0 or (i % res) != 0, i isn't a self-dividing number
            }
            if (!n) arr.push_back(i);
        }
        return arr;
    }
};