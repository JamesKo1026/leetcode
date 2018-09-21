class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> vec;
        int ans = 0;
        for (int i = 0; i < ops.size(); i++){
            int temp = 0;
            
            if (ops[i] == "+"){
                temp = (vec.back() + vec[vec.size() - 2]);   // sum last two number in the vector
                vec.push_back(temp);
            }
            else if (ops[i] == "D"){
                temp = vec.back() * 2;    // double the last number in the vector
                //cout << "test:" << temp << endl;
                vec.push_back(temp);
            }   
            else if (ops[i] == "C"){
                ans -= vec.back();        
                vec.pop_back();    // remove the last number in the vector
            }
            else{
                temp = stoi(ops[i]);
                vec.push_back(temp);
            }
            //cout << ans << endl;
            //for (int i = 0; i < vec.size(); i++)
               // cout << vec[i] << endl;
            ans += temp;
        }
        return ans;
    }   
};