
class Solution {
public:
    int binaryGap(int N) {
        //long long binaryNum = 0;
        int dis = 0;
        int temp_dis = -64;
        //long long digits = 1;
        //string s = "";
        while (N){
            if (N % 2){
                dis = max(dis, temp_dis);
                temp_dis = 0;
            }
            N /= 2;
            temp_dis++;
        }
        return dis;
        /*
        cout << s << endl;
        reverse(s.begin(), s.end());
        
        //if (binaryNum == 0)
            //return 0;a
        //cout << binaryNum << endl;
        //string s = to_string(binaryNum);
        cout << s << endl;
        int len = 0, max = 0;
        int flag = 0;   //  use to detect whether there are consecutive pairs of 1's
        for (int i = 0; i < s.size(); i++){
            if (s[i] == '1'){
                for (int j = i + 1; j < s.size(); j++){
                    if (s[j] == '1'){
                        len = j - i;
                        if (len > max)  // choose the longest gap
                            max = len;
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0)
                    break;
            }
        }
        //cout << flag << endl;
        //cout << max << endl;
        if (flag == 0)  return 0;
        else return max;
        */
    }
};


/*
class Solution {
public:
    int binaryGap(int N) {
        int res = 0;
        for (int d = -32; N; N /= 2, d++)
            if (N % 2) res = max(res, d), d = 0;
        return res;
    }
};
*/