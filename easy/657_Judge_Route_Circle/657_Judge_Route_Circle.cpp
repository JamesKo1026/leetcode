class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        for (int i = 0; i < moves.size(); i++){
            switch (moves[i]){
                case 'U':
                    y++;
                    break;
                case 'D':
                    y--;
                    break;
                case 'R':
                    x++;
                    break;
                case 'L':
                    x--;
                    break;
            }
        }
        /*
        if (!x && !y)
            return true;
        else
            return false;
        */
        return x == 0 && y == 0;
    }
};