class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        unordered_set<int> kinds;
        for (int i = 0; i < candies.size(); i++){
            kinds.insert(candies[i]);
        }
        if (kinds.size() > candies.size() / 2)
            return candies.size() / 2;
        else
            return kinds.size();
    }
};