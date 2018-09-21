class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        map<int, int> m;
        for (auto& bill : bills){
            m[bill]++;
            
            //int temp = bill;
            if (bill == 10){
                if (m[5] > 0)
                    m[5]--;
                else
                    return false;
            }
            else if (bill == 20){
                //cout << m[5] << endl;
                //cout << m[10] << endl;
                if ((m[5] > 0 && m[10] > 0) || m[5] >= 3){
                    
                    // 15 = 5 + 5 + 5 or 5 + 10
                    if (m[5] > 0 && m[10] > 0){
                        m[5]--;
                        m[10]--;
                        //cout << "123456" << endl;
                    }
                    else if (m[5] >= 3)
                        m[5] -= 3;    
                }
                else
                    return false;
            }
            //cout << "----" << endl;
            //cout << m[5] << " " << m[10] << " " << m[20] << endl;
            //cout << "----" << endl;
            
        }
        return true;
    }
};