class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int units = 0;
        int lines = 1;
        int last_line_widths = 0;
        for (int i = 0; i < S.size(); i++){
            units += widths[S[i] - 'a'];
            if (units > 100){
                lines++;
                units = widths[S[i] - 'a'];
            }
        }
        return {lines, units};
    }
};