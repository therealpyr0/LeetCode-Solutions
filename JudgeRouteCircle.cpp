class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0,l=moves.length();
        for(int i=0;i<l;i++){
            switch(moves[i]){
                case 'U':
                    y++;
                    break;
                case 'D':
                    y--;
                    break;
                case 'L':
                    x--;
                    break;
                case 'R':
                    x++;
                    break;
            }
            //if(x==0 && y==0)return true;
        }
        if(x==0 && y==0)return true;
        return false;
    }
};